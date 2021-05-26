/*
https://www.tinkercad.com/things/8JKZIjIc2h5-sizzling-fulffy/editel?sharecode=Wxvq0UI1-L79kGB7eaNdJbyhyK02UUDYcaZ0AyTIzbs
*/

unsigned long tiempo1 = 0;
unsigned long tiempo2 = 0;

int espera = 5000;

const int pin = 2;
int led = 1;

void setup(){
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin),fcontador,RISING);
}
void loop(){
  tiempo1 = millis();
  if((tiempo1 - tiempo2) > espera){
    tiempo2 = tiempo1;
    led=led/-1;
  }
  if(led == 1){
    digitalWrite(6, HIGH);
  }else{
    digitalWrite(6, LOW);
  }
  delay(1);
}

void fcontador(){
  espera -= 500;
  if(espera <= 0){
    espera = 5000;
  }
}
