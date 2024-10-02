import serial
import time

arduino = serial.Serial(port='COM5', baudrate=9600, timeout=1)

def writet(x):
    arduino.write(bytes(x, 'utf-8'))
while True:
    x = input("Enter command (a/b/c): ")
    writet(x)
    response = arduino.readline().decode('utf-8').strip()  # อ่านข้อมูลที่ส่งกลับจาก Arduino
    print("Response from Arduino:", response)
