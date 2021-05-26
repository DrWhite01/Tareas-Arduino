const int Echo = 4;
const int Trigger = 5; 

int ledRojo = 6;

float Distancia;
long Tiempo;

unsigned long tiempo1 = 0;
unsigned long tiempo2 = 0;

const int pin = 2;

void setup(){
  Serial.begin(9600);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(ledRojo, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pin),pir,RISING);
}

void loop(){
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  
  Tiempo = (pulseIn(Echo, HIGH)/2);
  
  Distancia = float(Tiempo * 0.0343);
  Serial.print("La distancia medida es ");
  Serial.print(Distancia);
  Serial.println("CM");
}

void pir(){
  Serial.println("SENSOR ACTIVADO");
  led();
}

void led(){
  digitalWrite(ledRojo,1);
  delay(500);
  digitalWrite(ledRojo,0);
  delay(500);
  digitalWrite(ledRojo,1);
}
