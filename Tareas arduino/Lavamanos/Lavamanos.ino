byte sensorpir = 6;
byte ledVerde = 7;
byte ledRojo = 8;

int contador = 0;
int reset = 0;

void setup(){
  pinMode(sensorpir, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(sensorpir) == HIGH && contador < 10){
    digitalWrite(ledRojo, 1);
    contador += 1;
    delay(1000);
  }else if(digitalRead(sensorpir) == HIGH && contador >= 10){
    digitalWrite(ledVerde, 1);
    digitalWrite(ledRojo, 0);
    delay(1000);
  }else if(digitalRead(sensorpir) == LOW && contador >= 10){
    contador = 0;
  }else{
    digitalWrite(ledVerde, 0);
    digitalWrite(ledRojo, 0);
    delay(1000);
  }

  if(digitalRead(sensorpir)== LOW && contador >= 1 && contador < 10){
    digitalWrite(ledRojo, 1);
    delay(1000);
    digitalWrite(ledRojo, 0);
    delay(1000);
  }
}
