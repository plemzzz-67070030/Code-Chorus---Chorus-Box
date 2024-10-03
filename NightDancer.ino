String python;
int buzzer_Melody = 12;

float C = 130.8;
float Csharp = 138.6;
float D = 146.8;
float Dsharp = 155.6;
float E = 164.8;
float F = 174.6;
float Fsharp = 185.0;
float G = 196.0;
float Gsharp = 207.7;
float A = 220;
float Asharp = 233.1;
float B = 246.9;

void setup() {
  Serial.begin(9600); // เริ่มต้น Serial
  pinMode(buzzer_Melody, OUTPUT); // ตั้งค่า Buzzer เป็น OUTPUT
}

void loop() {
  NightDancer(); // เรียกฟังก์ชันเล่นเพลง
}

void NightDancer() {
  float tempo_1 = 120/60; //80ครั้งต่อนาที beat per min
  // ห้องที่ 1
  tone(buzzer_Melody, A * 4, 1000/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, A * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, Gsharp * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, G * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 2
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 1000/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, C * 4, 750/tempo_1);
  delay(1000/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 3
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, G * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 4
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 1000/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, C * 4, 1000/tempo_1);
  delay(5000/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 6
  tone(buzzer_Melody, A * 2, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, A * 2, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, B * 2, 500/tempo_1);
  delay(500/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 7
  tone(buzzer_Melody, C * 4, 1000/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, D * 4, 1000/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, G * 2, 500/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, A * 2, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 8
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, C * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, A * 2, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, A * 2, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, B * 2, 500/tempo_1);
  delay(500/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 9
  tone(buzzer_Melody, C * 4, 1000/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, D * 4, 1000/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, G * 2, 500/tempo_1);
  delay(1000/tempo_1);
  tone(buzzer_Melody, A * 2, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง

  // ห้องที่ 10
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, F * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, D * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, A * 4, 500/tempo_1);
  delay(500/tempo_1);
  tone(buzzer_Melody, E * 4, 500/tempo_1);
  delay(500/tempo_1);
  noTone(buzzer_Melody); // หยุดเสียง
}
