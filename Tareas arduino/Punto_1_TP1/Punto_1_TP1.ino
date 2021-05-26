const int pin = 2;

void setup(){
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin),fcontador,CHANGE);
}

void loop(){

}

void fcontador(){
  Serial.println("Cambio de estado");
}
