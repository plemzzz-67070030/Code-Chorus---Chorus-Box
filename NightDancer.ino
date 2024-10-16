int buzzer_Melody = 12;
char UIP ;
float notes[] = {130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185.0, 196.0, 207.7, 220, 233.1, 246.9}; // C, C#, D, D#, E, F, F#, G, G#, A, A#, B

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer_Melody,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    UIP = Serial.read();
      if (UIP == 'o') {
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