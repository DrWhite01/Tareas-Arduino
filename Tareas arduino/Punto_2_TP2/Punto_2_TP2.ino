const int pin = 2;

long int timer=2000;
unsigned long tiempo1 = 0;
unsigned long tiempo2 = 0;

int variable = 1;

void setup(){
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin),boton,RISING);
}

void loop(){
  delay(1);
}

void boton(){
  if(variable == 1){
    Serial.println("Interrupcion Activada");
    tiempo1 = millis();
  }
  if(millis() < tiempo1 + timer){
    variable = 0;
  }else{
    variable = 1;
  }
}
