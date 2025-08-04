FROM python:3.10-slim

RUN apt-get update && apt-get install -y \
    ffmpeg \
    libasound2 \
    libasound2-dev \
    portaudio19-dev \
    pulseaudio-utils \
    build-essential \
    python3-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt

# ติดตั้ง PyAudio ด้วย pip (บางครั้งต้องใช้ wheel)
RUN pip install --no-cache-dir pyaudio

COPY . .

CMD ["python", "app.py"]
