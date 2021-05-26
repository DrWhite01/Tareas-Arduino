byte sensorpir = 2;
byte led1 = 13;
byte led2 = 12;
byte led3 = 11;

void setup(){
  pinMode(sensorpir, INPUT);
  pinMode(6, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop(){

  if(digitalRead(sensorpir) == HIGH){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    tone(6, 500);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    noTone(6);
    delay(1000);
  }
}
