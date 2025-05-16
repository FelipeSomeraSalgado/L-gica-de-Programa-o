int numero = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite um numero para ver a tabuada (entre 1 e 10):");
}

void loop() {
  if (Serial.available() > 0) {
    numero = Serial.parseInt(); 
    Serial.read(); 

    if (numero >= 1 && numero <= 10) {
      Serial.print("Tabuada do ");
      Serial.println(numero);
      for (int contador = 1; contador <= 10; contador++) {
        Serial.print(numero);
        Serial.print(" x ");
        Serial.print(contador);
        Serial.print(" = ");
        Serial.println(numero * contador);
      }
    } else {
      Serial.println("Numero invalido. Digite um numero entre 1 e 10.");
    }
    Serial.println("Digite outro numero para ver outra tabuada:");
  }
}