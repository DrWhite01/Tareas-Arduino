const int pin = 2;
int contador;

long tiempo = 5000;

void setup(){
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pin),fcontador,RISING);
}

void loop(){
  millis();
  if((millis() - tiempo) > 5000){
    tiempo = millis();
    contador = contador / 5;
    Serial.print("Se preciono el boton ");
    Serial.print(contador);
    Serial.println(" por segundo");
    contador = 0;
  }
  delay(1);
}

void fcontador(){
  
  contador += 1;
}
