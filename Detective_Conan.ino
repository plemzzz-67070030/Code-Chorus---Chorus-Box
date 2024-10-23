int buzzer_Melody = 13;
float notes[] = {130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185.0, 196.0, 207.7, 220, 233.1, 246.9}; 
// C, C#, D, D#, E, F, F#, G, G#, A, A#, B

void setup(){
  Serial.begin(9600); // Arduino Uno (Selector) 
  pinMode(buzzer_Melody, OUTPUT); // ตั้งค่า Buzzer เป็น OUTPUT
}

void loop(){
 conan();
}

void playNote(float frequency, int duration) {
  tone(buzzer_Melody, frequency);
  delay(duration);
}


void restNote(int duration) {
  noTone(buzzer_Melody);
  delay(duration);
}

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