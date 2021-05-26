/*
https://fundacionedisonorg-my.sharepoint.com/:v:/g/personal/fcattaneo_fundacionedison_org_ar/ET-TjvLMVaRDnBUigKyzzlwBCLpfUNgI5ye3jPNi1R_kiw?e=TfXWIV
*/

const int Echo = 6;
const int Trigger = 7; 

float Distancia;
long Tiempo;
const int pin = 3;

void setup(){
  pinMode(pin, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT); 
  attachInterrupt(digitalPinToInterrupt(pin),boton,RISING);
}

void loop(){
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  
  Tiempo = (pulseIn(Echo, HIGH)/2);
  
  Distancia = float(Tiempo * 0.0343);
  delay(1);
}

void boton(){
  Serial.print("Distancia del objeto: ");
  Serial.println(Distancia);
}
