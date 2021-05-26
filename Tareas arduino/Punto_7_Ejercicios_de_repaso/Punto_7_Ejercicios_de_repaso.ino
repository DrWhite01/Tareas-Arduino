
String aa;

void setup(){
  pinMode(2,OUTPUT);
Serial.begin(9600);
  Serial.println("Escriba Encendido o Apagado");
}

void loop()
{
    while(Serial.available() > 0) {
      aa = Serial.readString();
      Serial.println(aa);

      if (aa == "Encendido") {
        digitalWrite(2, HIGH);
      }
      else if (aa == "Apagado"){digitalWrite(2, LOW);}
    }
}
