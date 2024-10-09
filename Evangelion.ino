int buzzer_Melody = 12;

float notes[] = {130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185.0, 196.0, 207.7, 220, 233.1, 246.9}; // C, C#, D, D#, E, F, F#, G, G#, A, A#, B

void setup() {
  Serial.begin(9600); // Arduino Uno (Selector) 
  pinMode(buzzer_Melody, OUTPUT); // ตั้งค่า Buzzer เป็น OUTPUT
}

void loop(){
  Evangelion();
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
