String python;
int buzzer_Melody = 12;

float notes[] = {130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185.0, 196.0, 207.7, 220, 233.1, 246.9}; // C, C#, D, D#, E, F, F#, G, G#, A, A#, B

void setup() {
  Serial.begin(9600); // Arduino Uno (Selector) 
  pinMode(buzzer_Melody, OUTPUT); // ตั้งค่า Buzzer เป็น OUTPUT
}

void loop() {
  if (Serial.available() > 0) { // เช็คว่ามีข้อมูลจาก Serial หรือไม่
    python = Serial.readString(); // อ่านข้อมูลจาก Serial
    python.trim(); // ลบช่องว่าง

    if (python == "a") { 
      Evangelion(); // เรียกฟังก์ชันเล่นเพลง
    }
    else if (python == "b") {
      conan();
    }
    else if (python == "c") {
      NightDancer();
    }
  }
}
void playNote(float frequency, int duration) {
  tone(buzzer_Melody, frequency);
  delay(duration);
}
void restNote(int duration) {
  noTone(buzzer_Melody);
  delay(duration);
}

void Evangelion() {
  float tempos[] = {80 / 60.0, 120 / 60.0};
  // ห้องที่ 1
  playNote(notes[2] * 2, 1000 / tempos[0]);
  playNote(notes[5] * 2, 1000 / tempos[0]);
  playNote(notes[7] * 2, 750 / tempos[0]);
  playNote(notes[5] * 2, 750 / tempos[0]);
  playNote(notes[7] * 2, 500 / tempos[0]);
  restNote(30);
  // ห้องที่ 2
  playNote(notes[7] * 2, 1000 / tempos[0]);
  playNote(notes[0] * 4, 500 / tempos[0]);
  playNote(notes[10] * 2, 500 / tempos[0]);
  playNote(notes[9] * 2, 250 / tempos[0]);
  playNote(notes[7] * 2, 500 / tempos[0]);
  playNote(notes[9] * 2, 750 / tempos[0]);
  restNote(30);
  //ห้องที่ 3
  playNote(notes[9] * 2, 1000 / tempos[0]);
  playNote(notes[0] * 4, 1000 / tempos[0]);
  playNote(notes[2] * 4, 750 / tempos[0]);
  playNote(notes[7] * 2, 750 / tempos[0]);
  playNote(notes[5] * 2, 500 / tempos[0]);

  //ห้องที่4
  playNote(notes[0] * 4, 1000 / tempos[0]);
  playNote(notes[9] * 2, 500 / tempos[0]);
  playNote(notes[0] * 2, 500 / tempos[0]);
  restNote(30);
  playNote(notes[0] * 2, 500 / tempos[0]);
  playNote(notes[7] * 2, 1250 / tempos[0]);

  //ห้องที่5
  playNote(notes[2] * 2, 1000 / tempos[1]);
  playNote(notes[5] * 2, 1000 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  restNote(30);

  //ห้องที่6
  playNote(notes[7] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[0] * 4, 500 / tempos[1]);
  playNote(notes[10] * 2, 500 / tempos[1]);
  playNote(notes[9] * 2, 250 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[9] * 2, 750 / tempos[1]);
  restNote(30);

  //ห้องที่7
  playNote(notes[9] * 2, 1000 / tempos[1]);
  playNote(notes[0] * 4, 1000 / tempos[1]);
  playNote(notes[2] * 4, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);

  //ห้องที่8
  playNote(notes[0] * 4, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 4, 500 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[0] * 4, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 4, 750 / tempos[1]);
  playNote(notes[2] * 2, 750 / tempos[1]);

  //ห้องที่9
  playNote(notes[5] * 2, 500 / tempos[1]);
  playNote(notes[0] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 2, 1500 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);

  //ห้องที่10
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[0] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 2, 500 / tempos[1]);
  
  //ห้องที่11
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[10] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);
  playNote(notes[9] * 2, 750 / tempos[1]);
  restNote(30);

  //ห้องที่12
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[10] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[2] * 2, 1500 / tempos[1]);
  restNote(30);
  playNote(notes[2] * 2, 250 / tempos[1]);
  playNote(notes[4] * 2, 250 / tempos[1]);
  
  //ห้องที่13 
  playNote(notes[5] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 1500 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 250 / tempos[1]);
  playNote(notes[7] * 2, 250 / tempos[1]);

  //ห้องที่14
  playNote(notes[10] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[5] * 2, 1500 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  restNote(30);

  //ห้องที่15 ประทุน1
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[6] * 2, 500 / tempos[1]);
  playNote(notes[2] * 2, 1000 / tempos[1]);
  restNote(30);

  //ห้องที่16 ประทุน1
  playNote(notes[2] * 2, 1500 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 2000 / tempos[1]);

  //ห้องที่9 Repeated
  playNote(notes[5] * 2, 500 / tempos[1]);
  playNote(notes[0] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 2, 1500 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);

  //ห้องที่10 Repeated
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[0] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 2, 500 / tempos[1]);

  //ห้องที่11 Repeated
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[10] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);
  playNote(notes[9] * 2, 750 / tempos[1]);
  restNote(30);

  //ห้องที่12 Repeated
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[10] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[2] * 2, 1500 / tempos[1]);
  restNote(30);
  playNote(notes[2] * 2, 250 / tempos[1]);
  playNote(notes[4] * 2, 250 / tempos[1]);
  
  //ห้องที่13  Repeated
  playNote(notes[5] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 1500 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 250 / tempos[1]);
  playNote(notes[7] * 2, 250 / tempos[1]);

  //ห้องที่14 Repeated
  playNote(notes[10] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[5] * 2, 1500 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  
  //ห้องที่17 ประทุน2
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[6] * 2, 500 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[10] * 2, 750 / tempos[1]);

  //ห้องที่ 18 ประทุน2
  playNote(notes[9] * 2, 4000 / tempos[1]);

  //ห้องที่19
  playNote(notes[5] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);

  //ห้องที่20
  playNote(notes[7] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 750 / tempos[1]);
  playNote(notes[2] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);

  //ห้องที่ 21
  playNote(notes[5] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 750 / tempos[1]);
  playNote(notes[2] * 2, 750 / tempos[1]);

  //ห้องที่ 22
  playNote(notes[7] * 2, 1000 / tempos[1]);
  playNote(notes[9] * 2, 1000 / tempos[1]);
  playNote(notes[10] * 2, 1000 / tempos[1]);
  playNote(notes[0] * 2, 1000 / tempos[1]);

  //ห้องที่ 23
  playNote(notes[5] * 2, 1500 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[4] * 2, 750 / tempos[1]);
  
  //ห้องที่ 24
  playNote(notes[7] * 2, 750 / tempos[1]);
  restNote(30);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);
  playNote(notes[4] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  
  //ห้องที่ 25
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[10] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);

  //ห้องที่ 26
  playNote(notes[9] * 2, 2000 / tempos[1]);
  restNote(30);
  playNote(notes[9] * 2, 750 / tempos[1]);
  playNote(notes[11] * 2, 750 / tempos[1]);
  playNote(notes[1] * 2, 500 / tempos[1]);

  //ห้องที่ 27
  playNote(notes[2] * 2, 1000 / tempos[1]);
  playNote(notes[5] * 2, 1000 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  restNote(30);
  
  //ห้องที่ 28
  playNote(notes[7] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[0] * 4, 500 / tempos[1]);
  playNote(notes[10] * 2, 500 / tempos[1]);
  playNote(notes[9] * 2, 250 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[9] * 2, 750 / tempos[1]);
  restNote(30);

  //ห้องที่ 29
  playNote(notes[9] * 2, 1000 / tempos[1]);
  playNote(notes[0] * 4, 1000 / tempos[1]);
  playNote(notes[2] * 4, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);

  //ห้องที่ 30
  playNote(notes[4] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 500 / tempos[1]);
  playNote(notes[2] * 2, 500 / tempos[1]);
  playNote(notes[4] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 250 / tempos[1]);
  restNote(30);
  playNote(notes[4] * 2, 500 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);

  //ห้องที่ 31
  playNote(notes[4] * 2, 1000 / tempos[1]);
  playNote(notes[5] * 2, 1000 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  restNote(30);

  //ห้องที่ 32
  playNote(notes[7] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[0] * 4, 500 / tempos[1]);
  playNote(notes[10] * 2, 500 / tempos[1]);

  //ห้องที่ 33
  playNote(notes[9] * 2, 1000 / tempos[1]);
  playNote(notes[0] * 4, 1000 / tempos[1]);
  playNote(notes[2] * 4, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);

  //ห้องที่ 34
  playNote(notes[0] * 4, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 4, 500 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[0] * 4, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 4, 750 / tempos[1]);
  playNote(notes[2] * 4, 750 / tempos[1]);
  restNote(30);

  //ห้องที่ 35
  playNote(notes[4] * 2, 1000 / tempos[1]);
  playNote(notes[5] * 2, 1000 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 500 / tempos[1]);
  restNote(30);  

  //ห้องที่ 36
  playNote(notes[7] * 2, 500 / tempos[1]);
  restNote(30);
  playNote(notes[7] * 2, 500 / tempos[1]);
  playNote(notes[0] * 2, 500 / tempos[1]);
  playNote(notes[10] * 2, 500 / tempos[1]);
  restNote(30);

  //ห้องที่ 37
  playNote(notes[7] * 2, 1000 / tempos[1]);
  playNote(notes[0] * 2, 1000 / tempos[1]);
  playNote(notes[2] * 2, 750 / tempos[1]);
  playNote(notes[7] * 2, 750 / tempos[1]);
  playNote(notes[5] * 2, 500 / tempos[1]);

  //ห้องที่ 38
  playNote(notes[0] * 4, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 4, 500 / tempos[1]);
  playNote(notes[9] * 2, 500 / tempos[1]);
  playNote(notes[0] * 4, 500 / tempos[1]);
  restNote(30);
  playNote(notes[0] * 4, 750 / tempos[1]);
  playNote(notes[2] * 4, 500 / tempos[1]);
}
//////////////////////////////////////////////////////

void intro_loop(){
  	float tempo = 140/60;
    playNote(notes[9] * 2,750/tempo);
    playNote(notes[7] * 2,750/tempo);
    playNote(notes[5] * 2,750/tempo);
    playNote(notes[4] * 2,750/tempo);
    playNote(notes[2] * 2,1000/tempo);
}
void conan(){
  float tempo = 140/60;
  //ห้องที่ 1
  intro_loop();
  //ห้องที่ 2
  intro_loop();
  //ห้องที่ 3
  intro_loop();
  //ห้องที่ 4
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[7] * 2,1500/tempo);
  //ห้องที่ 5
  intro_loop();
  //ห้องที่ 6
  intro_loop();
  //ห้องที่ 7
  intro_loop();

  //ห้องที่ 8
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[5] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[7] * 2,400/tempo);
  playNote(notes[9] * 2,1000/tempo);
  playNote(notes[2] * 2,400/tempo);
  playNote(notes[4] * 2,100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,400/tempo);

  //ห้องที่ 9
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[9] * 2,2000/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[2] * 2,400/tempo);
  restNote(100/tempo);

  //ห้องที่ 10
  playNote(notes[4] * 2,1000/tempo);
  playNote(notes[10] * 2,1000/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);

  //ห้องที่ 11
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[9] * 2,1000/tempo);
  playNote(notes[4] * 2,100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,400/tempo);
  restNote(100/tempo);

  //ห้องที่ 12 
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,1500/tempo);

  //ห้องที่ 13
  playNote(notes[5] * 2,1000/tempo);
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[5] * 2,1000/tempo);

  //ห้องที่ 14
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[0] * 4,1000/tempo);
  playNote(notes[10] * 2,500/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);

  //ห้องที่ 15
  playNote(notes[9] * 2,4000/tempo);
  
  //ห้องที่ 16
  playNote(notes[9] * 2,2000/tempo);
  restNote(500/tempo);
  playNote(notes[2] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);

  //ห้องที่ 17
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[7] * 2,2000/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที 18
  playNote(notes[4] * 2,1000/tempo);
  playNote(notes[10] * 2,1000/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);

  //ห้องที่ 19
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[9] * 2,1000/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);

  //ห้องที่ 20
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,1500/tempo);

  //ห้องที่ 21
  playNote(notes[5] * 2,1000/tempo);
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[9] * 2,1000/tempo);
  playNote(notes[5] * 2,1000/tempo);

  //ห้องที่ 22
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[0] * 4,1000/tempo);
  playNote(notes[10] * 2,500/tempo);
  playNote(notes[7] * 2,250/tempo);
  playNote(notes[5] * 2,250/tempo);

  //ห้องที่ 23
  playNote(notes[7] * 2,5000/tempo);
  
  //ห้องที่ 24
  playNote(notes[4] * 2,1000/tempo);
  restNote(100/tempo);
  playNote(notes[4] * 4,2000/tempo);

  //ห้องที่ 25
  playNote(notes[5] * 4,1000/tempo);
  playNote(notes[2] * 4,1500/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[5] * 4,500/tempo);

  //ห้องที่ 26
  playNote(notes[4] * 4,500/tempo);
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[0] * 4,2000/tempo);
  playNote(notes[4] * 4,500/tempo);

  //ห้องที่ 27
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 28
  playNote(notes[9] * 2,2500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 29
  playNote(notes[10] * 2,1000/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,2500/tempo);
  
  //ห้องที่ 30
  playNote(notes[4] * 4,1000/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[10] * 2,500/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[4] * 4,500/tempo);

  //ห้องที่ 31
  playNote(notes[4] * 4,4000/tempo);
  
  //ห้องที่ 32
  playNote(notes[4] * 4,2000/tempo);
  restNote(1000/tempo);
  playNote(notes[4] * 2,100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 4,400/tempo);

  //ห้องที่ 53
  playNote(notes[5] * 4,1000/tempo);
  playNote(notes[2] * 4,1500/tempo);
  playNote(notes[0] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[5] * 4,500/tempo);
  
  //ห้องที่ 54
  playNote(notes[4] * 4,400/tempo);
  restNote(100/tempo);
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[0] * 4,2000/tempo);
  restNote(500/tempo);

  //ห้องที่ 55
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[0] * 4,250/tempo);
  playNote(notes[10] * 2,250/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 56
  playNote(notes[9] * 2,2000/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[5] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  restNote(100/tempo);
  //ห้องที่ 57
  playNote(notes[9] * 2,100/tempo);
  playNote(notes[10] * 2,1000/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,2000/tempo);
  playNote(notes[10] * 2,250/tempo);
  playNote(notes[0] * 4,250/tempo);

  //ห้องที่ 58
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[10] * 2,500/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[4] * 4,500/tempo);

  //ห้องที่ 59
  playNote(notes[4] * 4,4000/tempo);

  //ห้องที่ 60
  restNote(100/tempo);
  playNote(notes[4] * 4,2000/tempo);
  restNote(1000/tempo);
  playNote(notes[4] * 2,100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,400/tempo);
  restNote(100/tempo);

  //ห้องที่ 61
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[9] * 2,2000/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 62
  playNote(notes[4] * 2,1000/tempo);
  playNote(notes[10] * 2,1000/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);

  //ห้องที่ 63
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,400/tempo);
  playNote(notes[9] * 2,400/tempo);
  restNote(100/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[10] * 2,500/tempo);
  playNote(notes[0] * 4,500/tempo);

  //ห้องที่ 64
  playNote(notes[2] * 4,1000/tempo);
  playNote(notes[5] * 4,1000/tempo);
  playNote(notes[4] * 4,500/tempo);
  playNote(notes[0] * 4,1000/tempo);
  playNote(notes[2] * 2,2500/tempo);

  //ท่อนจบ
  playNote(notes[0] * 4,250/tempo);
  playNote(notes[1] * 4,250/tempo);
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[10] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[2] * 4,1000/tempo);
}
////////////////////////////////////////////////////////////////////////////

void NightDancer() {
  float tempo_1 = 120/60; //80ครั้งต่อนาที beat per min
  // ห้องที่ 1
  playNote(notes[9]* 2, 1000/tempo_1);
  playNote(notes[9]* 2, 500/tempo_1);
  playNote(notes[8] * 2, 500/tempo_1);
  playNote(notes[8] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);
  // ห้องที่ 2
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 1000/tempo_1);
  playNote(notes[0] * 2, 750/tempo_1);
  restNote(200);

  // ห้องที่ 3
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[7] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);

  // ห้องที่ 4
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 1000/tempo_1);
  playNote(notes[0] * 2, 1000/tempo_1);
  restNote(1000);

  // ห้องที่ 12
  playNote(notes[9]* 1, 500/tempo_1);
  playNote(notes[9]* 1, 500/tempo_1);
  playNote(notes[11] * 1, 500/tempo_1);

  // ห้องที่ 13
  playNote(notes[0] * 2, 1000/tempo_1);
  playNote(notes[2] * 2, 1000/tempo_1);
  playNote(notes[7] * 1, 500/tempo_1);
  restNote(500);
  playNote(notes[9]* 1, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);

  // ห้องที่ 14
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);
  playNote(notes[0] * 2, 500/tempo_1);
  playNote(notes[9]* 1, 500/tempo_1);
  playNote(notes[9]* 1, 500/tempo_1);
  playNote(notes[11] * 1, 500/tempo_1);

  // ห้องที่ 15
  playNote(notes[0] * 2, 1000/tempo_1);
  playNote(notes[2] * 2, 1000/tempo_1);
  playNote(notes[7] * 1, 500/tempo_1);
  playNote(notes[9]* 1, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);

  // ห้องที่ 16
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[5] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[9]* 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);

  // ห้องที่ 17
  playNote(notes[4] *2, 1000/tempo_1);
  playNote(notes[2] *2, 500/tempo_1);
  playNote(notes[0] *2, 500/tempo_1);
  playNote(notes[0] *2, 500/tempo_1);
  playNote(notes[7], 500/tempo_1);
  playNote(notes[9], 500/tempo_1);
  playNote(notes[4] *2, 500/tempo_1);

  // ห้องที่ 18
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[5] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[11], 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);

  // ห้องที่ 19
    restNote(200);
    playNote(notes[0] *2, 1000/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[7], 500/tempo_1);
    playNote(notes[7], 500/tempo_1);

  // ห้องที่ 20
    playNote(notes[9], 1000/tempo_1);
    playNote(notes[0] *2, 1000/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[11], 500/tempo_1);

  // ห้องที่ 21
    playNote(notes[0] *2, 1000/tempo_1);
    playNote(notes[2] *2, 1000/tempo_1);
    restNote(200);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);

  // ห้องที่ 22
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[11], 500/tempo_1);

  // ห้องที่ 23
    playNote(notes[0] *2, 1000/tempo_1);
    playNote(notes[2] *2, 1000/tempo_1);
    restNote(200);
    playNote(notes[7], 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);

  // ห้องที่ 24
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[5] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[9] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);

  // ห้องที่ 25
    playNote(notes[4] *2, 1000/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[9] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);

  // ห้องที่ 26
    playNote(notes[4] *2, 1000/tempo_1);
    playNote(notes[5] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    restNote(200);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[11], 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);

  // ห้องที่ 27
    restNote(200);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[7], 500/tempo_1);
    playNote(notes[7], 500/tempo_1);

  // ห้องที่ 28
    playNote(notes[9], 1000/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[0] *2, 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[7]*2, 500/tempo_1);
    playNote(notes[5]*2, 500/tempo_1);

  // ห้องที่ 29
    playNote(notes[5]*2, 500/tempo_1);
    playNote(notes[4] *2, 500/tempo_1);
    playNote(notes[2] *2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[7]*2, 500/tempo_1);
    playNote(notes[5]*2, 500/tempo_1);

  // ห้องที่ 30
    playNote(notes[5]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);

  // ห้องที่ 31
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[5]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);

  // ห้องที่ 32
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[7], 500/tempo_1);
    playNote(notes[7]*2, 500/tempo_1);
    playNote(notes[5]*2, 500/tempo_1);

  // ห้องที่ 33
    playNote(notes[5]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[7], 500/tempo_1);
    playNote(notes[7]*2, 500/tempo_1);
    playNote(notes[5]*2, 500/tempo_1);

  // ห้องที่ 34
    playNote(notes[5]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[9]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);

  // ห้องที่ 35
    restNote(200);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[4]*2, 500/tempo_1);
    playNote(notes[7], 500/tempo_1);
    playNote(notes[7], 500/tempo_1);

  // ห้องที่ 36
    playNote(notes[9], 1000/tempo_1);
    playNote(notes[0]*2, 1000/tempo_1);
    playNote(notes[2]*2, 500/tempo_1);
    playNote(notes[0]*2, 500/tempo_1);
    playNote(notes[0]*2, 1000/tempo_1);

    // ห้องที่ 37
    playNote(notes[9]* 2, 1000/tempo_1);
    playNote(notes[9]* 2, 500/tempo_1);
    playNote(notes[8] * 2, 500/tempo_1);
    playNote(notes[7] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 500/tempo_1);
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);

    // ห้องที่ 38
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 1000/tempo_1);
    playNote(notes[0] * 2, 750/tempo_1);
    restNote(200);

    // ห้องที่ 39
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 500/tempo_1);
    playNote(notes[7] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 500/tempo_1);
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);

    // ห้องที่ 40
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 1000/tempo_1);
    playNote(notes[9], 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);
    playNote(notes[2], 500/tempo_1);
    playNote(notes[0], 500/tempo_1);

    // ห้องที่ 41
    playNote(notes[9] * 2, 1000/tempo_1);
    playNote(notes[9] * 2, 500/tempo_1);
    playNote(notes[8] * 2, 500/tempo_1);
    playNote(notes[7] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 500/tempo_1);
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);

    // ห้องที่ 42
    playNote(notes[11] * 2, 500/tempo_1);
    playNote(notes[9] * 2, 500/tempo_1);
    playNote(notes[11] * 2, 500/tempo_1);
    playNote(notes[9] * 2, 500/tempo_1);
    playNote(notes[0] * 4, 1000/tempo_1);
    playNote(notes[2] * 4, 500/tempo_1);
    playNote(notes[0] * 4, 500/tempo_1);

    // ห้องที่ 43
    restNote(200);
    playNote(notes[0] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[4] * 2, 500/tempo_1);
    playNote(notes[7] * 2, 500/tempo_1);
    playNote(notes[2] * 2, 500/tempo_1);
    playNote(notes[0] * 2, 500/tempo_1);
}
