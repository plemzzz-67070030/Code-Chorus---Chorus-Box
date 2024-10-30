#User Interface Upgraded
import customtkinter as ct
import serial 
from tkinter import * 
import time
import pywinstyles #pip install pywinstyles
ser = serial.Serial("COM4",baudrate=9600,timeout=1)

song1Name = "Evangelion - Cruel Angel Thesis"
song2Name = "Conan OST"
song3Name = "Night Dancer"
song4Name = ""
song5Name = ""

NameList = ["67070029 ชยกร","6707000","6707000","6707000","6707000"] #ใส่ชื่อคนที่ละคน
stylelist = ["aero","acrylic","transparent","optimised","win7","inverse","native","popup","dark","mica","normal"] #โหมดหน้าต่าง

PlayingSong = ""

#function

def update ():
    time.sleep(.3)
    T.configure(text=f"Now Playing: {PlayingSong}")

def song1 ():

    ser.write(b'a')
    global PlayingSong
    PlayingSong = song1Name
    T.configure(text=f"Playing: Stop")
    update()

def song2 ():
    ser.write(b'b')
    global PlayingSong
    PlayingSong = song2Name
    T.configure(text=f"Playing: Stop")
    update()

def song3 ():
    ser.write(b'c')
    global PlayingSong
    PlayingSong = song3Name
    update()

def song4 ():
    ser.write(b'd')
    global PlayingSong
    PlayingSong = song4Name
    update()

def song5 ():
    ser.write(b'e')
    global PlayingSong
    PlayingSong = song5Name
    update()

def stop() :
    ser.write(b'stop')
    global PlayingSong
    PlayingSong = "Stop"
    update()

def change_windowstyles (choice):
    print(choice)
    pywinstyles.apply_style(root,"normal")
    pywinstyles.apply_style(root, choice)


#root setting     
root = ct.CTk()
root.title("Chorus Box Alpha")
root.geometry("1500x1500")
############

#Ui Setting
pad = 10 
fontsfamily = "Century Gothic"
buttonheight= 100
buttonwide = 500
#############################

toolbar = ct.CTkFrame(root, height=200) #แถบบน
statusbar = ct.CTkFrame(root, height=50) #แถบล่าง
l_custom = ct.CTkFrame(root,width= 300) #แถบซ้าย
r_custom = ct.CTkFrame(root,width= 120) #แถบขวา
mainfram = ct.CTkFrame(root)

#อันนี้จัดหน้าต่าง
toolbar.pack(side="top", fill="x",padx = pad, pady = pad)
statusbar.pack(side="bottom", fill="x",padx = pad, pady = pad)
l_custom.pack(side="left",fill="y",padx = pad)

mainfram.pack(side="top",fill = "both" ,expand = True )

#topbar
l1 = ct.CTkLabel(toolbar,height=20,fg_color="transparent",font=(fontsfamily,20),text="CHORUS BOX GUI 3.5")
l1.pack(side = "top" , fill = "y",pady = pad,padx = pad)

#leftbar
S = ct.CTkLabel(l_custom,fg_color="transparent",height=20,font=(fontsfamily,20),text="Developer Name")
S.pack(side = "top" , fill = "y",pady = pad,padx = pad)
for i in range(len(NameList)):
    n1 = ct.CTkLabel(l_custom,height=20,font=(fontsfamily,15),text=NameList[i])
    n1.pack(side = "top" , fill = "y",pady = pad,padx = pad)
M = ct.CTkComboBox(l_custom,width=200,values=stylelist,command=change_windowstyles)
M.pack(side = "bottom" , fill = "x")

songtextsize = 20
#maintab
ts = ct.CTkLabel(mainfram,width= 300,height= 200,fg_color="transparent",font=(fontsfamily,20),text="Please Select :")
ts.pack(side="left",padx = 20)
b1 = ct.CTkButton(master=mainfram,text=song1Name,command=song1, height=buttonheight , width= buttonwide ,font=(fontsfamily,songtextsize))
b1.pack(side = "top" ,padx = pad, pady = pad)
b2 = ct.CTkButton(master=mainfram,text=song2Name,command=song2, height=buttonheight , width= buttonwide,font=(fontsfamily,songtextsize))
b2.pack(side = "top" ,padx = pad, pady = pad)
b3 = ct.CTkButton(master=mainfram,text=song3Name,command=song3, height=buttonheight , width = buttonwide,font=(fontsfamily,songtextsize))
b3.pack(side = "top" ,padx = pad, pady = pad)
b4 = ct.CTkButton(master=mainfram,text=song4Name,command=song4, height=buttonheight , width = buttonwide,font=(fontsfamily,songtextsize))
b4.pack(side = "top" ,padx = pad, pady = pad)
b5 = ct.CTkButton(master=mainfram,text=song5Name,command=song5, height=buttonheight , width = buttonwide,font=(fontsfamily,songtextsize))
b5.pack(side = "top" ,padx = pad, pady = pad)

#Status Bar
T = ct.CTkLabel(statusbar,height= 30,fg_color="transparent",font=(fontsfamily,14),text=(f"Now Playing : {PlayingSong} ") )
T.pack(side= "left")

root.mainloop()#runTkinter
