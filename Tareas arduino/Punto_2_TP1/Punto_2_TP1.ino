const int pin = 2;
int led = 1;
void setup(){
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin),fcontador,CHANGE);
}
void loop(){
  //POR ALGUNA RAZON EL PROGRAMA NO CORRE SIN EL loop
}

void fcontador(){
  Serial.println("Cambio de estado");
  if(led == 1){
    digitalWrite(6,HIGH);
  }else{
    digitalWrite(6,LOW);
  }
  led = led / -1;
}
