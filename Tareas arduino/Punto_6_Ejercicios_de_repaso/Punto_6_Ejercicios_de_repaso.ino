int Datos;
int led = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  delay(2000);
}

void loop() {
   
    if(Serial.available()>0){
    int a= Serial.read();
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);

  }
}
