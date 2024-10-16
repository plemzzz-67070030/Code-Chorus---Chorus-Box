import serial 
import customtkinter 
from customtkinter import *
from PIL import Image
import tkinter as tk
import pywinstyles 

ser = serial.Serial("COM4",baudrate=9600,timeout=1)
def song1 ():
    ser.write(b'o')
def song2 ():
    ser.write(b'x')

root = customtkinter.CTk()
root.geometry("500x350")
root.title("ChorusBox Gui Alpha")
pywinstyles.apply_style(root, "aero") # just add this line 

set_appearance_mode("dark")
darklight = Image.open("image.png") #darklight button
play = Image.open("video-web-play.png") #play button

B1 = customtkinter.CTkButton(root, text="Night Dancer", fg_color="#4a2bba" ,
                             corner_radius=32 , hover_color='#4158D0' , border_color="#FFCC70" , 
                             image=CTkImage(dark_image=play,light_image=play), command=song1)
B1.pack(padx=20, pady=20)
B2 = customtkinter.CTkButton(root, text="Evangelion", fg_color="#4a2bba" ,
                             corner_radius=32 , hover_color='#4158D0' , border_color="#FFCC70" , 
                             image=CTkImage(dark_image=play,light_image=play), command=song2)
B2.pack(padx=20, pady=20)
B3 = customtkinter.CTkButton(root, text="Song 3", fg_color="#4a2bba" ,
                             corner_radius=32 , hover_color='#4158D0' , border_color="#FFCC70" , 
                             image=CTkImage(dark_image=play,light_image=play))
B3.pack(padx=20, pady=20)
B4 = customtkinter.CTkButton(root, text="Song 4", fg_color="#4a2bba" ,
                             corner_radius=32 , hover_color='#4158D0' , border_color="#FFCC70" , 
                             image=CTkImage(dark_image=play,light_image=play))
B4.pack(padx=20, pady=20)
B5 = customtkinter.CTkButton(root, text="Song 5", fg_color="#4a2bba" ,
                             corner_radius=32 , hover_color='#4158D0' , border_color="#FFCC70" , 
                             image=CTkImage(dark_image=play,light_image=play))
B5.pack(padx=20, pady=20)
root.mainloop()
