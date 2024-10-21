#User Interface Upgraded
import customtkinter as ct
import serial as ser
from tkinter import * 
import pywinstyles #pip install pywinstyles
#ser.Serial("COM3",baudrate=9600,timeout=1)

song1Name = ""
song2Name = ""
song3Name = ""
song4Name = ""
song5Name = ""

NameList = ["67070029 ชยกร","6707000","6707000","6707000","6707000"] #ใส่ชื่อคนที่ละคน
stylelist = ["aero","acrylic","transparent","optimised","win7","inverse","native","popup","dark","mica","normal"] #โหมดหน้าต่าง

#function
def song1 ():
    ser.write('a')
def song2 ():
    ser.write('b')
def song3 ():
    ser.write('c')
def song4 ():
    ser.write('d')
def song5 ():
    ser.write('e')
def stop() :
    ser.write('stop')
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
l1 = ct.CTkTextbox(toolbar,height=20,fg_color="transparent",font=(fontsfamily,20))
l1.insert(0.0, "Chorus Box 2.0" )
l1.pack(side = "top" , fill = "y",pady = pad,padx = pad)

#leftbar
S = ct.CTkTextbox(l_custom,fg_color="transparent",height=20,font=(fontsfamily,20))
S.insert(0.0, "Developer" )
S.pack(side = "top" , fill = "y",pady = pad,padx = pad)
for i in range(len(NameList)):
    n1 = ct.CTkTextbox(l_custom,height=20,font=(fontsfamily,15))
    n1.insert(0.0, NameList[i] )
    n1.pack(side = "top" , fill = "y",pady = pad,padx = pad)
M = ct.CTkComboBox(l_custom,width=200,values=stylelist,command=change_windowstyles)
M.pack(side = "bottom" , fill = "x")


#maintab
ts = ct.CTkTextbox(mainfram,width= 300,height= 200,fg_color="transparent",font=(fontsfamily,20))
ts.pack(side="left",padx = 20)
ts.insert(0.0,"Please Select a Song :")
b1 = ct.CTkButton(master=mainfram,text=song1Name,command=song1, height=buttonheight , width= buttonwide)
b1.pack(side = "top" ,padx = pad, pady = pad,)
b2 = ct.CTkButton(master=mainfram,text=song2Name,command=song2, height=buttonheight , width= buttonwide)
b2.pack(side = "top" ,padx = pad, pady = pad)
b3 = ct.CTkButton(master=mainfram,text=song3Name,command=song3, height=buttonheight , width = buttonwide)
b3.pack(side = "top" ,padx = pad, pady = pad)
b4 = ct.CTkButton(master=mainfram,text=song4Name,command=song4, height=buttonheight , width = buttonwide)
b4.pack(side = "top" ,padx = pad, pady = pad)
b5 = ct.CTkButton(master=mainfram,text=song5Name,command=song5, height=buttonheight , width = buttonwide)
b5.pack(side = "top" ,padx = pad, pady = pad)

PlayingSong = "" #ฝากภาคภูมิดูให้หน่อย
#Status Bar
T = ct.CTkTextbox(statusbar,height= 10,fg_color="transparent",font=(fontsfamily,20))
T.insert(0.0,"Now Playing :" ,PlayingSong)
T.pack(side= "left")

root.mainloop()#runTkinter
