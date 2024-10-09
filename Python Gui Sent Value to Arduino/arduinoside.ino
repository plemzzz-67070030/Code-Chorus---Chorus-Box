char UIP ;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    UIP = Serial.read();
      if (UIP == 'o') {
        digitalWrite(LED_BUILTIN, HIGH);
      }
      if(UIP == 'x'){
        digitalWrite(LED_BUILTIN, LOW);
      }
  } 
}
