import rclpy
from rclpy.node import Node
from my_command_pkg.srv import SendPosition  # ต้องมี field pos_x, pos_y, pos_z ใน srv

class Navigation(Node):
    def __init__(self):
        super().__init__('nevigetion')
        self.srv = self.create_service(SendPosition, 'nevigetion', self.text_process)
        self.get_logger().info('Nevigation service is up and running.')

    def text_process(self, request, response):
        # อ่านค่าที่ client ส่งมา
        pos_x = request.send_x
        pos_y = request.send_y
        pos_z = request.send_z

        # แสดงค่าที่ได้
        self.get_logger().info(
            f"Received position -> X: {pos_x}, Y: {pos_y}, Z: {pos_z}"
        )

        # สามารถแก้ response เพื่อส่งค่ากลับ client ได้ถ้าจำเป็น
        response.success = True  # ถ้าใน srv มี field success
        response.message = "Position received"  # ถ้ามี field message
        return response

def main(args=None):
    rclpy.init(args=args)
    node = Navigation()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
