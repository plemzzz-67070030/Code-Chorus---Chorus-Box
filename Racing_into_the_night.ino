int buzzer_Melody = 13;
float notes[] = {130.8, 138.6, 146.8, 155.6, 164.8, 174.6, 185.0, 196.0, 207.7, 220, 233.1, 246.9}; 
// C, C#, D, D#, E, F, F#, G, G#, A, A#, B

void setup(){
  Serial.begin(9600); // Arduino Uno (Selector) 
  pinMode(buzzer_Melody, OUTPUT); // ตั้งค่า Buzzer เป็น OUTPUT
}

void loop(){
 racing_into_the_night();
}

void playNote(float frequency, int duration) {
  tone(buzzer_Melody, frequency);
  delay(duration);
}


void restNote(int duration) {
  noTone(buzzer_Melody);
  delay(duration);
}

void solo_racing_into_night(){
  float tempo = 130/60;
  
  //ห้องที่ 10
  playNote(notes[9] * 2, 250/tempo);
  playNote(notes[7] * 2, 500/tempo);
  playNote(notes[4] * 2, 750/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2, 500/tempo);
  playNote(notes[2] * 2, 500/tempo);
  playNote(notes[4] * 2, 250/tempo);
  playNote(notes[9] , 250/tempo);
  playNote(notes[0] * 4, 250/tempo);
  playNote(notes[11] * 2, 250/tempo);

  //ห้องที่ 11
  playNote(notes[7] *2, 250/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[7] *2, 750/tempo);
  playNote(notes[9] *2, 500/tempo);
  playNote(notes[7] *2, 500/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[2] *2, 500/tempo);
  playNote(notes[9] , 500/tempo);

  //ห้องที่ 12
  playNote(notes[4] *2, 250/tempo);
  playNote(notes[2] *2, 500/tempo);
  playNote(notes[0] *2, 750/tempo);
  playNote(notes[9] , 500/tempo);
  playNote(notes[8] , 500/tempo);
  playNote(notes[5] *2, 500/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[11] , 500/tempo);

  //ห้องที่ 13
  playNote(notes[2] *2, 500/tempo);
  playNote(notes[0] *2, 250/tempo);
  playNote(notes[7] *2, 750/tempo);
  playNote(notes[5] *2, 500/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[7] *2, 750/tempo);
  playNote(notes[5] *2, 500/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[7] , 500/tempo);
  restNote(30);
  playNote(notes[7] , 250/tempo);
  playNote(notes[9] , 250/tempo);
  playNote(notes[0] *2, 250/tempo);
  playNote(notes[7] *2, 250/tempo);

  //ห้องที่ 14
  playNote(notes[4] *2, 250/tempo);
  playNote(notes[2] *2, 500/tempo);
  playNote(notes[0] *2, 750/tempo);
  playNote(notes[9] , 500/tempo);
  playNote(notes[0] *2, 500/tempo);
  playNote(notes[2] *2, 500/tempo);
  playNote(notes[4] *2, 250/tempo);
  playNote(notes[9] , 250/tempo);
  playNote(notes[0] *4, 250/tempo);
  playNote(notes[8] *2, 250/tempo);
  
  //ห้องที่ 15
  playNote(notes[7] *2, 250/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[7] *2, 750/tempo);
  playNote(notes[9] *2, 500/tempo);
  playNote(notes[7] *2, 500/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[2] *2, 250/tempo);
  playNote(notes[9] , 250/tempo);
  playNote(notes[0] *2, 250/tempo);
  playNote(notes[7] *2, 250/tempo);

  //ห้องที่ 16
  playNote(notes[4] *2, 250/tempo);
  playNote(notes[2] *2, 500/tempo);
  playNote(notes[0] *2, 750/tempo);
  playNote(notes[9] , 500/tempo);
  playNote(notes[8] , 500/tempo);
  playNote(notes[5] *2, 500/tempo);
  playNote(notes[4] *2, 500/tempo);
  playNote(notes[11] , 500/tempo);

  //ห้องที่ 17
  playNote(notes[11] , 500/tempo);
  playNote(notes[7] , 250/tempo);
  playNote(notes[9] , 250/tempo);
  playNote(notes[0] *2, 250/tempo);
  playNote(notes[2] *2, 250/tempo);
  playNote(notes[4] *2, 250/tempo);
  playNote(notes[9] *2, 250/tempo);
  playNote(notes[7] *2, 250/tempo);
  playNote(notes[2] *2, 250/tempo);
  playNote(notes[4] *2, 250/tempo);
  playNote(notes[9] *2, 250/tempo);
  playNote(notes[0] *2, 1000/tempo);
}

void racing_into_the_night(){
  float tempo = 130/60;

  //ห้องที่ 1
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้อที่ 2
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[5] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 3
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,1000/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);

  //ห้องที่ 4
  playNote(notes[2] * 2,750/tempo);
  playNote(notes[11] ,750/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  restNote(30);
  playNote(notes[4] * 4,500/tempo);
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  
  //ห้องที่ 5
  playNote(notes[0] * 4,750/tempo);
  playNote(notes[11] * 2,750/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 6
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[5] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 7
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[0] * 4,1000/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  restNote(30);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 8
  playNote(notes[0] * 2,4000/tempo);

  //ห้องที่ 9
  restNote(500/tempo);
  playNote(notes[9] ,500/tempo);
  restNote(30);
  playNote(notes[9] ,1000/tempo);
  restNote(30);
  playNote(notes[9] ,750/tempo);
  restNote(30);
  playNote(notes[9] ,250/tempo);
  playNote(notes[7] ,250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);

  //ห้องที่ 10-17
  solo_racing_into_night();

  //ห้องที่ 18
  playNote(notes[9] ,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[0] * 2 ,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[7] ,500/tempo);
  playNote(notes[4] ,500/tempo);
  playNote(notes[7] ,500/tempo);

  //ห้องที 19
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,1000/tempo);
  playNote(notes[7] ,500/tempo);
  restNote(30);
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 20
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  restNote(30);
  playNote(notes[5] * 2 ,500/tempo);

  //ห้องที่ 21
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 22
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[0] * 2,750/tempo);
  playNote(notes[2] * 2,750/tempo);
  playNote(notes[11] ,500/tempo);
  restNote(30);

  //ห้องที่ 23
  playNote(notes[11] ,500/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[11] * 2,750/tempo);
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,1000/tempo);
  restNote(30);
  playNote(notes[9] ,500/tempo);
  playNote(notes[7] ,500/tempo);

  //ห้งอที่ 24
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[11] ,500/tempo);
  restNote(30);
  playNote(notes[11] ,500/tempo);
  restNote(30);
  playNote(notes[11] ,500/tempo);
  
  //ห้องที่ 25
  playNote(notes[11] ,250/tempo);
  playNote(notes[9] ,500/tempo);
  restNote(30);
  playNote(notes[9] ,1000/tempo);
  restNote(1500/tempo);
  playNote(notes[7] ,500/tempo);

  //ห้องที่ 26
  playNote(notes[9] ,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  restNote(500/tempo);
  playNote(notes[7] ,500/tempo);
  playNote(notes[4] ,500/tempo);
  playNote(notes[7] ,500/tempo);

  //ห้องที่ 27
  playNote(notes[7] ,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[7] ,500/tempo);
  restNote(30);
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 28
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 29
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 30
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[0] * 2,750/tempo);
  playNote(notes[2] * 2,750/tempo);
  playNote(notes[0] * 2,500/tempo);

  //ห้องที่ 31
  playNote(notes[11] ,500/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[11] ,750/tempo);
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,1000/tempo);
  restNote(30);
  playNote(notes[9] ,500/tempo);
  playNote(notes[11] ,500/tempo);
  
  //ห้องที่ 32
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[11] ,500/tempo);
  restNote(30);
  playNote(notes[11] ,500/tempo);
  restNote(30);
  playNote(notes[11] ,500/tempo);

  //ห้องที่ 33
  playNote(notes[11] ,500/tempo);
  playNote(notes[9] ,500/tempo);
  restNote(500/tempo);
  playNote(notes[7] ,250/tempo);
  restNote(30);
  playNote(notes[7],250/tempo);
  restNote(30);
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,500/tempo);

  //ห้องที่ 34
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);

  //ห้องที่ 35
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[7] ,500/tempo);
  playNote(notes[4] ,250/tempo);
  playNote(notes[9] * 2,500/tempo);
  restNote(250/tempo);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[5] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);
  playNote(notes[4] * 2,250/tempo);

  //ห้องที่ 36
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  restNote(30);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[2] * 2,250/tempo);

  //ห้องที่ 37
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[7] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[0] * 2,500/tempo);

  //ห้องที่ 38
  restNote(500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(30);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 39
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[8] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 40
  playNote(notes[9] ,500/tempo);
  playNote(notes[7] ,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,1000/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);

  //ห้องที่ 41
  playNote(notes[4] * 2,1000/tempo);
  restNote(1500/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  restNote(30);

  //ห้องที่ 42
  playNote(notes[7] * 2,750/tempo);
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  
  //ห้องที่ 43
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,1000/tempo);
  restNote(30);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 44
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);

  //ห้องที่ 45
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 46
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[5] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 47
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[11] ,500/tempo);

  //ห้องที่ 48
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 49
  playNote(notes[8] * 2,1000/tempo);
  restNote(500/tempo);
  playNote(notes[4] * 2,500/tempo);
  restNote(30);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  restNote(30);

  //ห้องที่ 50
  playNote(notes[7] * 2,750/tempo);
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 51
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 52
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);

  //ห้องที่ 53
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,1000/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 54
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[5] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  restNote(30);

  //ห้องที่ 55
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[0] * 4,1000/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);

  //ห้องที่ 56
  restNote(500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[5] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  restNote(250/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(30);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);

  //ห้องที่ 57-64
  solo_racing_into_night();

  //ห้องที่ 88
  playNote(notes[7] * 2,500/tempo);
  restNote(30);
  playNote(notes[7] * 2,250/tempo);
  restNote(30);
  playNote(notes[7] * 2,250/tempo);
  restNote(30);
  playNote(notes[7] * 2,500/tempo);
  restNote(30);
  playNote(notes[7] * 2,500/tempo);
  restNote(30);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[5] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  restNote(30);
  playNote(notes[2] * 2,250/tempo);

  //ห้องที่ 89
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,250/tempo);
  playNote(notes[4] * 2,250/tempo);
  restNote(250/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,250/tempo);

  //ห้องที่ 90
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[9] ,250/tempo);
  restNote(30);
  playNote(notes[9] ,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[0] * 4,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 91
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);

  //ห้องที่ 92
 playNote(notes[7] * 2,500/tempo);
  restNote(30);
  playNote(notes[7] * 2,250/tempo);
  restNote(30);
  playNote(notes[7] * 2,250/tempo);
  restNote(30);
  playNote(notes[7] * 2,500/tempo);
  restNote(30);
  playNote(notes[7] * 2,500/tempo);
  restNote(30);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[5] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[2] * 2,250/tempo);

  //ห้องที่ 93
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 94
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[0] * 2,500/tempo);

  //ห้องที่ 95
  playNote(notes[0] * 2,500/tempo);
  restNote(2000/tempo);
  playNote(notes[7] ,500/tempo);
  restNote(30);
  playNote(notes[7] ,250/tempo);
  restNote(30);
  playNote(notes[7] ,250/tempo);
  restNote(30);
  playNote(notes[7] ,250/tempo);
  playNote(notes[9] ,250/tempo);

  //ห้องที่ 96
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(250/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);

  //ห้องที่ 97
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[7] ,500/tempo);
  restNote(30);
  playNote(notes[7] ,250/tempo);
  playNote(notes[9] * 2,500/tempo);
  restNote(250/tempo);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  restNote(30);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[5] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);
  playNote(notes[4] * 2,250/tempo);

  //ห้องที่ 98
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  restNote(30);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  
  //ห้องที่ 99
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  restNote(500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 100
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[2] * 2,500/tempo);
  restNote(250/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[9] * 2,250/tempo);
  restNote(30);
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[7] * 2,250/tempo);
  restNote(30);
  playNote(notes[7] * 2,250/tempo);
  playNote(notes[9] * 2,250/tempo);
  restNote(30);
  playNote(notes[9] * 2,250/tempo);

  //ห้องที่ 101
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  restNote(250/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(1000/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 102
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[0] * 2,750/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[0] * 2,500/tempo);
  restNote(30);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 103
  playNote(notes[8] * 2,1500/tempo);
  playNote(notes[4] * 2,1000/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);

  //ห้องที่ 104
  restNote(2500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[10] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  restNote(30);

  //ห้องที่ 105
  playNote(notes[6] * 2,750/tempo);
  playNote(notes[8] * 2,750/tempo);
  playNote(notes[3] * 2,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[8] * 2,500/tempo);

  //ห้องที่ 106
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[1] * 2,250/tempo);
  playNote(notes[3] * 2,500/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[11] * 2,1000/tempo);
  restNote(30);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);

  //ห้องที่ 107
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[3] * 2,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[10] ,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);

  //ห้องที่ 108
  playNote(notes[3] * 2,750/tempo);
  playNote(notes[1] * 2,250/tempo);
  playNote(notes[3] * 2,250/tempo);
  playNote(notes[8] * 2,750/tempo);
  playNote(notes[6] * 2,1000/tempo);
  playNote(notes[3] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);

  //ห้องที่ 109
  playNote(notes[8] * 2,750/tempo);
  playNote(notes[4] * 2,750/tempo);
  playNote(notes[3] * 2,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[8] * 2,500/tempo);

  //ห้องที่ 110
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[8] * 2,250/tempo);
  playNote(notes[3] * 2,750/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  restNote(500/tempo);
  playNote(notes[8] ,500/tempo);
  playNote(notes[10] ,500/tempo);

  //ห้องที่ 111
  playNote(notes[11] ,500/tempo);
  playNote(notes[8] ,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[3] * 2,500/tempo);
  playNote(notes[8] * 2,500/tempo);

  //ช่วงเปลี่ยนคีย์
  playNote(notes[7] * 2,1500/tempo);
  playNote(notes[8] * 2,1500/tempo);
  playNote(notes[9] * 2,1000/tempo);

  //ห้องที่ 113
  playNote(notes[5] ,250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[5] * 2,250/tempo);
  playNote(notes[0] * 2,250/tempo);
  playNote(notes[5] * 2,250/tempo);

  //ห้องที่ 114
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[1] * 4,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 115
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[11] * 2,750/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);

  //ห้องที่ 116
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[11] * 2,250/tempo);
  playNote(notes[6] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,1000/tempo);
  restNote(30);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 117
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 118
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[6] * 2,750/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,1000/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 119
  playNote(notes[11] * 2,750/tempo);
  playNote(notes[7] * 2,750/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);

  //ห้องที่ 120
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[11] * 2,250/tempo);
  playNote(notes[5] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,1000/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[1] * 2,500/tempo);

  //ห้องที่ 121
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);

  //ห้องที่ 122
  playNote(notes[10] * 2,1500/tempo);
  playNote(notes[6] * 2,500/tempo);
  restNote(30);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[1] * 4,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 123
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[11] * 2,750/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);

  //ห้องที่ 124
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[11] * 2,250/tempo);
  playNote(notes[6] * 2,750/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,1000/tempo);
  restNote(30);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 125
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[0] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);

  //ห้องที่ 126
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[6] * 2,750/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,1000/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 127
  playNote(notes[11] * 2,750/tempo);
  playNote(notes[7] * 2,750/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[1] * 4,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 128
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[1] * 4,500/tempo);
  playNote(notes[2] * 4,500/tempo);
  playNote(notes[5] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 129
  restNote(500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 130
  restNote(1500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);

  //ห้องที่ 131
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 132
  restNote(1000/tempo);
  playNote(notes[6] * 2,500/tempo); 
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);

  //ห้องที่ 133
  playNote(notes[2] * 2,500/tempo); 
  playNote(notes[11] ,250/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[2] * 2,500/tempo);

  //ห้องที่ 134
  playNote(notes[11] * 2,250/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[6] * 2,750/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[6] * 2,250/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[2] * 4,250/tempo);
  playNote(notes[1] * 4,250/tempo);

  //ห้องที่ 135
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[11] ,500/tempo);

  //ห้องที่ 136
  playNote(notes[6] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,750/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[10] ,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[1] * 2,500/tempo);

  //ห้องที่ 137
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[9] ,500/tempo);
  restNote(30);
  playNote(notes[9] ,250/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[9] * 2,250/tempo);

  //ห้องที่ 138
  playNote(notes[6] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,750/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[2] * 2,500/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[6] * 2,250/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[2] * 4,250/tempo);
  playNote(notes[1] * 2,250/tempo);
  
  //ห้องที่ 139
  playNote(notes[9] * 2,250/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[11] * 2,500/tempo);
  playNote(notes[9] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[9] * 2,250/tempo);

  //ห้องที่ 140
  playNote(notes[6] * 2,250/tempo);
  playNote(notes[4] * 2,500/tempo);
  playNote(notes[2] * 2,750/tempo);
  playNote(notes[11] ,500/tempo);
  playNote(notes[10] ,500/tempo);
  playNote(notes[7] * 2,500/tempo);
  playNote(notes[6] * 2,500/tempo);
  playNote(notes[1] * 2,500/tempo);

  //ห้องที่ 141
  playNote(notes[1] * 2,500/tempo);
  playNote(notes[9] ,250/tempo);
  playNote(notes[11] ,250/tempo);
  playNote(notes[2] * 2,250/tempo);
  playNote(notes[4] * 2,250/tempo);
  playNote(notes[6] * 2,250/tempo);
  playNote(notes[11] * 2,250/tempo);
  playNote(notes[9] * 2,750/tempo);
  playNote(notes[11] * 2,250/tempo);
  restNote(500/tempo);
  playNote(notes[2] * 4,500/tempo);
}