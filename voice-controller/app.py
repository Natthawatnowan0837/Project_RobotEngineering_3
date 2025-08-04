import json
import datetime
import playsound
import os
import sounddevice as sd
import soundfile as sf
import torch
import numpy as np
import speech_recognition as sr  
from gtts import gTTS
from sentence_transformers import SentenceTransformer, util
from transformers import WhisperProcessor, WhisperForConditionalGeneration

with open('commands.json', 'r', encoding='utf-8') as f:
    commands_json = json.load(f)

actions_list = commands_json["actions"]
rooms_dict = commands_json["rooms"]

model = SentenceTransformer('paraphrase-multilingual-MiniLM-L12-v2')


model_text = "biodatlab/whisper-th-small-combined"
processor = WhisperProcessor.from_pretrained(model_text)
whisper_model = WhisperForConditionalGeneration.from_pretrained(model_text)
device = "cuda" if torch.cuda.is_available() else "cpu"
whisper_model.to(device)

def speak(text):
    tts = gTTS(text=text, lang='th')
    filename = "voice.mp3"
    tts.save(filename)
    print(f"[เสียง] {text} (บันทึกไฟล์ที่ {filename})")

def match_phrase(user_input, phrase_list):
    input_vec = model.encode(user_input, convert_to_tensor=True)
    for phrase in phrase_list:
        phrase_vec = model.encode(phrase, convert_to_tensor=True)
        similarity = util.cos_sim(input_vec, phrase_vec).item()
        if similarity > 0.8 or phrase in user_input:
            return True
    return False


def find_action(user_input):
    for action in actions_list:
        if action in user_input:
            print(f"\naction: {action}")
            return action
    print("\nไม่พบ action")
    return None


def find_room_by_substring(user_input, phrase_dict):
    for key, phrases in phrase_dict.items():
        for phrase in phrases:
            if phrase in user_input:
                print(f"\nพบห้อง: {key} จากคำว่า '{phrase}'")
                return key
    return None

def find_best_match(user_input, phrase_dict, threshold=0.7):
    input_vec = model.encode(user_input, convert_to_tensor=True)
    best_score = 0
    best_key = None

    for key, phrases in phrase_dict.items():
        for phrase in phrases:
            phrase_vec = model.encode(phrase, convert_to_tensor=True)
            similarity = util.cos_sim(input_vec, phrase_vec).item()
            if similarity > best_score:
                best_score = similarity
                best_key = key

    if best_score >= threshold:
        return best_key
    else:
        return None
    
def respond_room(room_id):
    response_text = rooms_dict[room_id]["response"]
    print(f"\nกำลังนำทางไปยังห้อง {response_text}")
    speak(f"กำลังนำทางไปยังห้อง {response_text}")

def tell_time():
    now = datetime.datetime.now().strftime("%H:%M:%S")
    speak(f"\nตอนนี้เวลา {now}")

def record_audio(filename="voice.wav", fs=16000):
    recognizer = sr.Recognizer()
    with sr.Microphone(sample_rate=fs) as source:
        input("กด Enter เพื่อเริ่มอัดเสียง...")
        print("\nปรับเสียงรบกวนรอบข้าง...")
        recognizer.adjust_for_ambient_noise(source, duration=3)

    print("\nเริ่มอัดเสียง พูดได้เลย... (กด Enter เพื่อหยุด)")
    recording = []
    with sd.InputStream(samplerate=fs, channels=1, callback=lambda indata, frames, time, status: recording.append(indata.copy())):
        input("กด Enter เพื่อหยุดบันทึกเสียง...")

    audio_np = np.concatenate(recording, axis=0)
    sf.write(filename, audio_np, fs)
    print("\nบันทึกเสียงไว้ที่:", filename)

def listen_command():
    record_audio()
    speech, sample_rate = sf.read("voice.wav")
    speech = speech.astype(np.float32) 
    inputs = processor(speech, sampling_rate=sample_rate, return_tensors="pt").to(device)

    with torch.no_grad():
        predicted_ids = whisper_model.generate(inputs.input_features)

    transcription = processor.batch_decode(predicted_ids, skip_special_tokens=True)[0]
    print(f"\nคุณพูดว่า: {transcription}")
    return transcription.lower()

if __name__ == "__main__":
    speak("\nสวัสดีครับ ต้องการให้ช่วยอะไรครับ")
    while True:
        try:
            text = listen_command()
            if not text.strip():
                speak("ขอโทษครับ ผมไม่ได้ยิน กรุณาพูดใหม่อีกครั้ง")
                continue

            if "เวลา" in text:
                tell_time()
                continue

            if "ออก" in text or "จบ" in text:
                speak("ลาก่อนครับ")
                break

            action = find_action(text)
            room = find_room_by_substring(text, {k: v["commands"] for k, v in rooms_dict.items()})
            if not room:
                room = find_best_match(text, {k: v["commands"] for k, v in rooms_dict.items()}, threshold=0.6)

            if action and room:
                respond_room(room)
            else:
                speak("\nขอโทษครับ ฉันไม่เข้าใจคำสั่งนี้")

        except Exception as e:
            print("เกิดข้อผิดพลาด:", e)
            speak("ขอโทษครับ เกิดข้อผิดพลาด ลองใหม่อีกครั้ง")
