int buzzer_Melody = 13;
int buzzer_Duet = 12;
float notes[] = {130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185.0, 196.0, 207.7, 220, 233.1, 246.9}; 
// C, C#, D, D#, E, F, F#, G, G#, A, A#, B

void setup(){
  Serial.begin(9600); // Arduino Uno (Selector) 
  pinMode(buzzer_Melody, OUTPUT); // ตั้งค่า Buzzer เป็น OUTPUT
  pinMode(buzzer_Duet, OUTPUT); 
}

void loop(){
 Chihatan();
}

void playNote(float frequency, int duration) {
  tone(buzzer_Melody, frequency);
  delay(duration);
}
void playNote_Duet(float frequency, int duration) {
  tone(buzzer_Duet, frequency);
  delay(duration);
}

void restNote(int duration) {
  noTone(buzzer_Melody);
  delay(duration);
}
void restNote_duet(int duration) {
  noTone(buzzer_Duet);
  delay(duration);
}

void Chihatan(){
  float tempo = 140/60;
  //ห้องที่ 1
  playNote(notes[7] * 2, 1000/tempo);
  playNote(notes[6] * 2, 1500/tempo);
  playNote(notes[9] * 2, 500/tempo);

  //ห้องที่ 2
  playNote(notes[7] * 2, 1000/tempo);
  restNote(30);
  playNote(notes[7] * 2, 1000/tempo);
  playNote(notes[0] * 2, 100/tempo);
  playNote(notes[2] * 2, 100/tempo);
  playNote(notes[4] * 2, 100/tempo);
  playNote(notes[5] * 2, 1000/tempo);
  
  //ห้องที่ 3,4
  restNote(500/tempo);
  playNote(notes[5] * 2, 750/tempo);
  restNote(30);
  playNote(notes[5] * 2, 250/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[0] * 2, 250/tempo);
  playNote(notes[2] * 2, 2000/tempo);
  playNote(notes[4] * 2, 500/tempo);

  //ห้องที่ 5
  playNote(notes[4] * 2, 1500/tempo);
  playNote(notes[2] * 2, 1000/tempo);
  playNote(notes[4] * 2, 500/tempo);

  //ห้องที่ 6
  playNote(notes[4] * 2, 2000/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[4] * 2, 250/tempo);

  //ห้องที่ 7
  playNote(notes[7] * 2, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);
  playNote(notes[2] * 4, 1000/tempo);
  playNote_Duet(notes[5] * 2, 1000/tempo);
  restNote(30);
  restNote_duet(30);
  playNote(notes[2] * 4, 1000/tempo);
  playNote_Duet(notes[5] * 2, 1000/tempo);
  playNote(notes[4] * 4, 1000/tempo);

  //ห้องที่ 8
  playNote(notes[0] * 4, 500/tempo);
  playNote(notes[9] * 2, 500/tempo);
  playNote(notes[0] * 4, 2000/tempo);

  //ห้องที่ 9 
  playNote(notes[0] * 4, 2000/tempo);
  restNote(1000/tempo);

  //ห้องที่ 10
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  restNote(30);
  playNote(notes[7] * 2, 1000/tempo);
  restNote(30);
  playNote(notes[7] * 2, 1000/tempo);

  //ห้องที่ 11
  restNote(750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[9] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);

  //ห้องที่ 12
  playNote(notes[9] * 2, 1000/tempo);
  restNote(30);
  playNote(notes[9] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[9] * 2, 1000/tempo);

  //ห้องที่ 13
  playNote(notes[0] * 4, 1000/tempo);
  playNote(notes[2] * 4, 750/tempo);
  playNote(notes[4] * 4, 250/tempo);
  playNote(notes[2] * 4, 1000/tempo);

  //ห้องที่ 14
  playNote(notes[2] * 4, 500/tempo);
  restNote(500/tempo);
  playNote(notes[4] * 4, 750/tempo);
  playNote(notes[2] * 4, 250/tempo);
  playNote(notes[0] * 4, 1000/tempo);

  //ห้องที่ 15
  playNote(notes[9] * 2, 1500/tempo);
  restNote(500/tempo);
  playNote(notes[0] * 4, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);

  //ห้องที่ 16
  playNote(notes[7] * 2, 1000/tempo);
  playNote(notes[4] * 2, 1000/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[0] * 2, 250/tempo);

  //ห้องที่ 17
  playNote(notes[2] * 2, 1000/tempo);
  playNote(notes[4] * 2, 1000/tempo);
  playNote(notes[7] * 2, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);
  
  //ห้องที่ 18
  playNote(notes[7] * 2, 2000/tempo);
  playNote(notes[4] * 2, 750/tempo);
  playNote_Duet(notes[0] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote_Duet(notes[4] * 2, 250/tempo);
  restNote(30);
  restNote_duet(30);

  //ห้องที่ 19
  playNote(notes[7] * 2, 1000/tempo);
  playNote_Duet(notes[4] * 2, 1000/tempo);
  restNote(30);
  restNote_duet(30);
  playNote(notes[7] * 2, 1000/tempo);
  playNote_Duet(notes[4] * 2, 1000/tempo);
  restNote(750/tempo);
  restNote_duet(750/tempo);
  playNote(notes[7] * 2, 250/tempo);

  //ห้องที่ 20
  playNote(notes[9] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[9] * 2, 1000/tempo);
  restNote(30);

  //ห้องที่ 21
  playNote(notes[9] * 2, 750/tempo);
  playNote_Duet(notes[5] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote_Duet(notes[4] * 2, 500/tempo);
  playNote(notes[9] * 2, 750/tempo);
  playNote_Duet(notes[5] * 2, 750/tempo);
  playNote(notes[0] * 4, 1000/tempo);
  playNote_Duet(notes[9] * 2, 1000/tempo);

  //ห้องที่ 22
  playNote(notes[2] * 4, 750/tempo);
  playNote_Duet(notes[10] * 4, 750/tempo);
  playNote(notes[4] * 4, 250/tempo);
  playNote_Duet(notes[0] * 4, 250/tempo);
  playNote(notes[2] * 4, 1500/tempo);
  playNote(notes[11] * 4, 1500/tempo);
  restNote(500/tempo);
  restNote_duet(500/tempo);

  //ห้องที่ 23
  playNote(notes[4] * 4, 750/tempo);
  playNote(notes[2] * 4, 250/tempo);
  playNote(notes[0] * 4, 750/tempo);
  restNote(30);
  playNote(notes[0] * 4, 250/tempo);
  playNote(notes[9] * 2, 1000/tempo);

  //ห้องที่ 24
  playNote(notes[9] * 2, 500/tempo);
  restNote(500/tempo);
  playNote(notes[0] * 4, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);
  playNote(notes[7] * 2, 1000/tempo);

  //ห้องที่ 25
  playNote(notes[4] * 2, 1000/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[0] * 2, 250/tempo);
  playNote(notes[2] * 2, 1000/tempo);

  //ห้องที่ 26
  playNote(notes[4] * 2, 1000/tempo);
  playNote(notes[7] * 2, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);
  playNote(notes[0] * 4, 1000/tempo);

  //ห้องที่ 27
  playNote(notes[0] * 4, 2000/tempo);
  playNote(notes[4] * 2, 1000/tempo);
  
  //ห้องที่ 28
  playNote(notes[4] * 2, 1000/tempo);
  playNote(notes[7] * 2, 333/tempo);
  playNote(notes[9] * 2, 333/tempo);
  playNote(notes[0] * 4, 1000/tempo);

  //ห้องที่ 29
  playNote(notes[9] * 2, 1000/tempo);
  playNote(notes[7] * 2, 1000/tempo);
  playNote(notes[9] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  
  //ห้องที่ 30
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[2] * 2, 250/tempo);
  playNote(notes[0] * 2, 750/tempo);
  playNote(notes[4] * 2, 250/tempo);
  playNote(notes[2] * 2, 1000/tempo);

  //ห้องที่ 31
  playNote(notes[2] * 2, 1000/tempo);
  playNote(notes[4] * 2, 2000/tempo);
  
  //ห้องที่ 32
  playNote(notes[7] * 2, 333/tempo);
  playNote(notes[9] * 2, 333/tempo);
  playNote(notes[7] * 2, 333/tempo);
  playNote(notes[0] * 4, 1000/tempo);
  playNote(notes[9] * 2, 1000/tempo);

  //ห้องที่ 33
  playNote(notes[0] * 4, 1000/tempo);
  playNote(notes[2] * 4, 750/tempo);
  playNote(notes[0] * 4, 250/tempo);
  playNote(notes[2] * 4, 750/tempo);
  playNote(notes[4] * 4, 250/tempo);

  //ห้องที่ 34 กับ 35
  playNote(notes[0] * 4, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);
  playNote(notes[7] * 2, 1000/tempo);
  restNote(30);
  playNote(notes[7] * 2, 2000/tempo);
  restNote(2000/tempo);

  //ห้องที่ 36
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  restNote(30);
  playNote(notes[7] * 2, 1000/tempo);
  restNote(30);
  playNote(notes[7] * 2, 1000/tempo);

  //ห้องที่ 37
  restNote(750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[9] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  
  //ห้องที่ 38
  playNote(notes[9] * 2, 1000/tempo);
  restNote(30);
  playNote(notes[9] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[9] * 2+
  , 1000/tempo);

  //ห้องที่ 39
  playNote(notes[0] * 2, 1000/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[4] * 2, 250/tempo);
  playNote(notes[2] * 2, 1000/tempo);

  //ห้องที่ 40
  playNote(notes[2] * 2, 500/tempo);
  restNote(500/tempo);
  playNote(notes[5] * 2, 750/tempo);
  playNote(notes[2] * 2, 250/tempo);
  playNote(notes[0] * 2, 1000/tempo);

  //ห้องที่ 41
  playNote(notes[9] * 2 , 1500/tempo);
  restNote(500/tempo);
  playNote(notes[0] * 4, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);

  //ห้องที่ 42
  playNote(notes[7] * 2, 1000/tempo);
  playNote(notes[4] * 2, 1000/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[0] * 2, 250/tempo);

  //ห้องที่ 43
  playNote(notes[2] * 2, 1000/tempo);
  playNote(notes[5] * 2, 1000/tempo);
  playNote(notes[7] * 2, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);

  //ห้องที่ 44
  playNote(notes[7] * 2, 2000/tempo);
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  restNote(30);

  //ห้องที่ 45
  playNote(notes[7] * 2, 1000/tempo);
  restNote(30);
  playNote(notes[7] * 2, 1000/tempo);
  restNote(750/tempo);
  playNote(notes[7] * 2, 1000/tempo);

  //ห้องที่ 46
  playNote(notes[9] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote(notes[9] * 2, 1000/tempo);
  restNote(30);

  //ห้องที่ 47
  playNote(notes[9] * 2, 750/tempo);
  playNote_Duet(notes[5] * 2, 750/tempo);
  playNote(notes[7] * 2, 250/tempo);
  playNote_Duet(notes[4] * 2, 250/tempo);
  playNote(notes[9] * 2, 1000/tempo);
  playNote_Duet(notes[5] * 2, 1000/tempo);
  playNote(notes[0] * 2, 1000/tempo);
  playNote_Duet(notes[9] * 2, 1000/tempo);

  //ห้องที่ 48
  playNote(notes[2] * 2, 750/tempo);
  playNote_Duet(notes[11] * 2, 750/tempo);
  playNote(notes[4] * 2, 250/tempo);
  playNote_Duet(notes[0] * 2, 250/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[11] * 2, 750/tempo);
  restNote(500/tempo);
  restNote_duet(500/tempo);

  //ห้องที่ 49
  playNote(notes[4] * 4, 750/tempo);
  playNote(notes[2] * 4, 250/tempo);
  playNote(notes[0] * 4, 750/tempo);
  restNote(30);
  playNote(notes[0] * 4, 250/tempo);
  playNote(notes[9] * 2, 1000/tempo);

  //ห้องที่ 50
  playNote(notes[9] * 2, 500/tempo);
  restNote(500/tempo);
  playNote(notes[0] * 4, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);
  playNote(notes[7] * 2, 1000/tempo);

  //ห้องที่ 51
  playNote(notes[4] * 2, 1000/tempo);
  playNote(notes[2] * 2, 750/tempo);
  playNote(notes[0] * 2, 250/tempo);
  playNote(notes[2] * 2, 1000/tempo);

  //ห้องที่ 52
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[2] * 2, 250/tempo);
  playNote(notes[7] * 2, 750/tempo);
  playNote(notes[9] * 2, 250/tempo);
  playNote(notes[0] * 4, 3000/tempo);
}
