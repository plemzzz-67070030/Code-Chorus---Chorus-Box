import serial
import tkinter as tk
ser = serial.Serial("COM3",baudrate=9600,timeout=1)
def song1 ():
    ser.write(b'o')
def song2 ():
    ser.write(b'x')

root = tk.Tk()
root.option_add("*Font", "console 20")
root.title("ChorusBox Gui Alpha")

tk.Label(root , text= "ChorusBox Project").pack()

tk.Label(root, text= "Select A Song :").place(relx=0,rely=0.01)

B1 = tk.Button(root, text="open led",command=song1).pack()

B2 = tk.Button(root, text="close led",command=song2).pack()

root.mainloop()