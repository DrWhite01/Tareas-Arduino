int numero1;
int numero2;

int resultado;

void setup(){
  Serial.begin(9600);
  Serial.println("Ingrese dos numero que quiera sumar");
}

void loop(){
  while(Serial.available()){
    numero1 = Serial.parseInt();
    numero2 = Serial.parseInt();
    
    resultado = numero1 + numero2;
    
    Serial.print("La suma entre ");
    Serial.print(numero1);
    Serial.print(" y ");
    Serial.print(numero2);
    Serial.print(" es: ");
    Serial.println(resultado);
    Serial.println("Ingrese dos numero que quiera sumar");
  }
}
