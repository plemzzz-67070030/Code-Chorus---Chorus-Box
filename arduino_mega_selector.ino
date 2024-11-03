#User Interface Upgraded
import customtkinter as ct
import serial
from tkinter import * 
from PIL import Image, ImageTk
import pywinstyles #pip install pywinstyles
ser = serial.Serial("COM4",baudrate=9600,timeout=1)

song1Name = "Evangelion - Cruel Angel Thesis"
song2Name = "Conan OST"
song3Name = "Night Dancer"
song4Name = "Chihatan"
song5Name = "Racing Into The Night"
song6Name = "Fly Me To The Moon"

NameList = ["67070003 กฤษกร","67070029 ชยกร","67070030 ชยากร","67070008 ก้องภพ","67070128 ภาคภูมิ"] #ใส่ชื่อคนที่ละคน
stylelist = ["aero","acrylic","transparent","optimised","win7","inverse","native","popup","dark","mica","normal"] #โหมดหน้าต่าง

PlayingSong = ""
ct.set_appearance_mode("Dark")
#function

def song1 ():
    ser.write(b'a')

def song2 ():
    ser.write(b'b')

def song3 ():
    ser.write(b'c')

def song4 ():
    ser.write(b'd')

def song5 ():
    ser.write(b'e')

def song6 ():
    ser.write(b'f')

def change_windowstyles (choice):
    print(choice)
    pywinstyles.apply_style(root,"normal")
    pywinstyles.apply_style(root, choice)

def read_serial(): #ฟังก์ชั่นสำหรับรับค่าจาก Arduino ไว้ใช้เปลี่ยนสถานะของเพลง
    global PlayingSong
    if ser.in_waiting > 0:
        response = ser.readline().decode('utf-8').strip() #ตัวแปรที่รับค่ากลับมา
        if response and not response.isspace():
            PlayingSong = response
            T.configure(text=f"Now Playing: {PlayingSong}")
    root.after(100, read_serial) #รันเช็คค่าที่รับเข้ามาตลอด


#root setting     
root = ct.CTk()
root.title("Chorus Box Alpha")
root._state_before_windows_set_titlebar_color = 'zoomed'
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

###IMAGE
logo = ct.CTkImage(light_image=Image.open('images/logo.png'),
    dark_image=Image.open('images/logo.png'),
    size= (40,40))
nightdancerimg = ct.CTkImage(light_image=Image.open('images/nightdancer.jpg'),
	dark_image=Image.open('images/nightdancer.jpg'),
	size=(400,250))
evangelionimg = ct.CTkImage(light_image=Image.open('images/evangelion.jpg'),
	dark_image=Image.open('images/evangelion.jpg'),
	size=(400,250))
detectiveconanimg = ct.CTkImage(light_image=Image.open('images/detectiveconan.jpg'),
	dark_image=Image.open('images/detectiveconan.jpg'),
	size=(400,250))
chihatanimg = ct.CTkImage(light_image=Image.open('images/chihatan.jpg'),
	dark_image=Image.open('images/chihatan.jpg'),
	size=(400,250))
yorunikakeruimg = ct.CTkImage(light_image=Image.open('images/yorunikakeru.jpg'),
	dark_image=Image.open('images/yorunikakeru.jpg'),
	size=(400,250))
moonimg = ct.CTkImage(light_image=Image.open('images/moon.png'),
	dark_image=Image.open('images/moon.png'),
	size=(400,250))
###

#topbar
l1 = ct.CTkLabel(toolbar,height=20,fg_color="transparent",font=(fontsfamily,20),text="CHORUS BOX GUI 3.5")
l1.pack(side = "top" , fill = "y",pady = pad,padx = pad)
lo = ct.CTkLabel(toolbar,height=10,width=10,text="",image=logo)
lo.place(relx = 0.001,rely = 0.035)

#leftbar
S = ct.CTkLabel(l_custom,fg_color="transparent",height=20,font=(fontsfamily,20),text="Developer Name")
S.pack(side = "top" , fill = "y",pady = pad,padx = pad)
for i in range(len(NameList)):
    n1 = ct.CTkLabel(l_custom,height=20,font=(fontsfamily,15),text=NameList[i])
    n1.pack(side = "top" , fill = "y",pady = pad,padx = pad)
M = ct.CTkComboBox(l_custom,width=200,values=stylelist,command=change_windowstyles)
M.pack(side = "bottom" , fill = "x")

songtextsize = 20



xshift = -0.03
left_image = ct.CTkImage(light_image=Image.open('images/logo it.png'),
dark_image=Image.open('images/logo it.png'),size=(200, 200))
left_image_label = ct.CTkLabel(l_custom, image=left_image, text="")
left_image_label.pack(pady=100)

#maintab
ts = ct.CTkLabel(mainfram,width= 300,height= 200,fg_color="transparent",font=(fontsfamily,20,"bold"),text="Select Music:")
ts.place(relx=0 + xshift, rely=-0.08)

a1 = ct.CTkLabel(mainfram, text="", image=nightdancerimg)
a1.place(relx=0.052 + xshift,rely=0.11)
b1 = ct.CTkButton(master=mainfram,text="▶ NIGHT DANCER",font=(fontsfamily, 24),command=song3, height=50 , width= 400, fg_color='#40589c')
b1.place(relx=0.052 + xshift,rely=0.41)

a2 = ct.CTkLabel(mainfram, text="", image=evangelionimg)
a2.place(relx=0.372 + xshift,rely=0.11)
b2 = ct.CTkButton(master=mainfram,text="▶ Cruel Angel's Thesis",font=(fontsfamily, 24),command=song1, height=50 , width= 400, fg_color='#40589c')
b2.place(relx=0.372 + xshift,rely=0.41)

a3 = ct.CTkLabel(mainfram, text="", image=detectiveconanimg)
a3.place(relx=0.692 + xshift,rely=0.11)
b3 = ct.CTkButton(master=mainfram,text='▶ Detective Conan',font=(fontsfamily, 24),command=song2, height=50 , width= 400, fg_color='#40589c')
b3.place(relx=0.692 + xshift,rely=0.41)

a4 = ct.CTkLabel(mainfram, text="", image=chihatanimg)
a4.place(relx=0.052 + xshift,rely=0.51)
b4 = ct.CTkButton(master=mainfram,text='▶ Chi-Ha-Tan',font=(fontsfamily, 24),command=song4, height=50 , width= 400, fg_color='#40589c')
b4.place(relx=0.052 + xshift,rely=0.81)

a5 = ct.CTkLabel(mainfram, text="", image=yorunikakeruimg)
a5.place(relx=0.372 + xshift,rely=0.51)
b5 = ct.CTkButton(master=mainfram,text='▶ Yoru ni kakeru',font=(fontsfamily, 24),command=song5, height=50 , width= 400, fg_color='#40589c')
b5.place(relx=0.372 + xshift,rely=0.81)

a6 = ct.CTkLabel(mainfram, text="", image=moonimg)
a6.place(relx=0.692 + xshift,rely=0.51)
b6 = ct.CTkButton(master=mainfram,text='▶ Fly me to the moon',font=(fontsfamily, 24),command=song6, height=50 , width= 400, fg_color='#40589c')
b6.place(relx=0.692 + xshift,rely=0.81)

#Status Bar
T = ct.CTkLabel(statusbar,height= 30,fg_color="transparent",font=(fontsfamily,14),text=(f"Now Playing : {PlayingSong} ") )
T.pack(side= "left")

read_serial()
root.mainloop()#runTkinter
