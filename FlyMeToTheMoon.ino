int buzzer_Melody = 12;
float notes[] = {130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185.0, 196.0, 207.7, 220, 233.1, 246.9}; // C, C#, D, D#, E, F, F#, G, G#, A, A#, B

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer_Melody,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  FlyMeToTheMoon();
  
}
void playNote(float frequency, int duration) {
  tone(buzzer_Melody, frequency);
  delay(duration);
}
void restNote(int duration) {
  noTone(buzzer_Melody);
  delay(duration);
}
void FlyMeToTheMoon() {
  float tempo_1 = 120/60;
  // ห้องที่ 1
  playNote(notes[2] * 4, 1500/tempo_1);
  playNote(notes[1] * 4, 500/tempo_1);
  playNote(notes[11] * 2, 1000/tempo_1);
  playNote(notes[9] * 2, 500/tempo_1);
  playNote(notes[7] * 2, 500/tempo_1);
  
  // ห้องที่ 2
  playNote(notes[7] * 2, 500/tempo_1);
  restNote(30);
  playNote(notes[9] * 2, 1500/tempo_1);
  playNote(notes[11] , 1000/tempo_1);
  playNote(notes[2] * 4, 1000/tempo_1);

  // ห้องที่ 3
  playNote(notes[1] * 4, 1500/tempo_1);
  playNote(notes[11] * 2, 500/tempo_1);
  playNote(notes[9] * 2, 1000/tempo_1);
  playNote(notes[2] * 4, 500/tempo_1);
  playNote(notes[11] * 2, 500/tempo_1);
  playNote(notes[6] * 2, 500/tempo_1);

  //ห้องที่ 4
  playNote(notes[6] * 2, 4000/tempo_1);

  //ห้องที่ 5
  playNote(notes[11] * 2, 1500/tempo_1);
  playNote(notes[9] * 2, 500/tempo_1);
  playNote(notes[7] * 2, 1000/tempo_1);
  playNote(notes[6] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);

  //ห้องที่ 6
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[6] * 2, 1500/tempo_1);
  playNote(notes[7] * 2, 1000/tempo_1);
  playNote(notes[11] * 2, 1000/tempo_1);

  //ห้องที่ 7
  playNote(notes[10] * 2, 1500/tempo_1);
  playNote(notes[7] * 2, 500/tempo_1);
  playNote(notes[6] * 2, 1000/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);

  //ห้องที่ 8
  playNote(notes[2] * 2, 3000/tempo_1);
  playNote(notes[3] * 2, 1000/tempo_1);
  
  //ห้องที่ 9
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[11] * 2, 1000/tempo_1);
  restNote(30);
  playNote(notes[11] * 2, 2500/tempo_1);
  
  //ห้องที่ 10
  playNote(notes[11] * 2, 2000/tempo_1);
  playNote(notes[2] * 4, 1000/tempo_1);
  playNote(notes[1] * 4, 1000/tempo_1);
  
  //ห้องที่ 11
  playNote(notes[9] * 2, 4000/tempo_1);

  //ห้องที่ 12
  playNote(notes[9] * 2, 3000/tempo_1);
  playNote(notes[1] * 2, 1000/tempo_1);

  //ห้องที่ 13
  playNote(notes[2] * 2, 500/tempo_1);
  playNote(notes[7] * 2, 1000/tempo_1);
  restNote(30);
  playNote(notes[7] * 2, 2500/tempo_1);

  //ห้องที่ 14
  playNote(notes[7] * 2, 1000/tempo_1);
  playNote(notes[11] * 2, 2000/tempo_1);
  playNote(notes[9] * 2 , 1000/tempo_1);

  //ห้องที่ 15
  playNote(notes[7] * 2, 1500/tempo_1);
  playNote(notes[6] * 2, 2500/tempo_1);

  //ห้องที่ 16
  playNote(notes[6] * 2, 2000/tempo_1);
  restNote(2000/tempo_1);

  //ห้องที่ 17
  playNote(notes[2] * 4, 1500/tempo_1);
  playNote(notes[1] * 4, 500/tempo_1);
  playNote(notes[11]* 2 , 1000/tempo_1);
  playNote(notes[9] * 2 , 500/tempo_1);
  playNote(notes[7] * 2 , 500/tempo_1);

  //ห้องที่ 18
  playNote(notes[7] * 2, 500/tempo_1);
  playNote(notes[9] * 4, 1500/tempo_1);
  playNote(notes[11] * 2, 1000/tempo_1);
  playNote(notes[2] * 4, 1000/tempo_1);

  //ห้องที่ 19
  playNote(notes[1] * 4, 1500/tempo_1);
  playNote(notes[4] * 4, 500/tempo_1);
  playNote(notes[9] * 2, 1000/tempo_1);
  playNote(notes[7] * 2, 500/tempo_1);
  playNote(notes[6] * 2, 500/tempo_1);

  //ห้องที่ 20
  playNote(notes[6] * 2, 4000/tempo_1);
  
  //ห้องที่ 21
  playNote(notes[11]* 2, 1500/tempo_1);
  playNote(notes[9] * 2, 500/tempo_1);
  playNote(notes[7] * 2, 1000/tempo_1);
  playNote(notes[6] * 2, 500/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);

  //ห้องที่ 22
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[6] * 2, 1500/tempo_1);
  playNote(notes[7] * 2 , 1000/tempo_1);
  playNote(notes[11] * 2, 1000/tempo_1);

  //ห้องที่ 23
  playNote(notes[8] * 2, 1500/tempo_1);
  playNote(notes[7] * 2, 500/tempo_1);
  playNote(notes[6] * 2, 1000/tempo_1);
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[2] * 2, 500/tempo_1);

  //ห้องที่ 24
  playNote(notes[2] * 2, 3000/tempo_1);
  playNote(notes[3] * 2 , 1000/tempo_1);

  //ห้องที่ 25
  playNote(notes[4] * 2, 500/tempo_1);
  playNote(notes[11] * 2 , 1000/tempo_1);
  restNote(30);
  playNote(notes[11] * 2 , 2500/tempo_1);
  
  //ห้องที่ 26
  playNote(notes[11] * 2 , 1000/tempo_1);
  playNote(notes[2] * 4, 2000/tempo_1);
  playNote(notes[0] * 4, 1000/tempo_1);

  //ห้องที่ 27
  playNote(notes[9] * 2, 4000/tempo_1);

  //ห้องที่ 28
  playNote(notes[9] * 2, 3000/tempo_1);
  playNote(notes[3] * 2, 1000/tempo_1);

  //ห้องที่ 29
  playNote(notes[11]* 2, 500/tempo_1);
  playNote(notes[2] * 2, 1000/tempo_1);
  restNote(30);
  playNote(notes[2] * 2, 2500/tempo_1);

  //ห้องที่ 30
  playNote(notes[2] * 2, 2000/tempo_1);
  restNote(30);
  playNote(notes[2] * 2, 1000/tempo_1);
  playNote(notes[4] * 2 , 1000/tempo_1);

  //ห้องที่ 31
  playNote(notes[2] * 2 , 4000/tempo_1);
  restNote(30);
  //ห้องที่ 32
  playNote(notes[2] * 4, 1000/tempo_1);
  playNote(notes[6] * 4, 500/tempo_1);
  playNote(notes[2] * 4, 1000/tempo_1);
  restNote(30);
  playNote(notes[2] * 4, 4500/tempo_1);

  //ห้องที่ 33
  playNote(notes[0] * 4, 1000/tempo_1);
  playNote(notes[1] * 4, 1000/tempo_1);
  playNote(notes[2] * 4, 4000/tempo_1);
}
