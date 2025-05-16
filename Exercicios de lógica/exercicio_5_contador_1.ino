void setup() {
  Serial.begin(9600);
  
  int numero = 60;

  while (numero <= 101) {
    if (numero <= 80) {
      if (numero % 2 == 0) {
        Serial.print("Par: ");
        Serial.println(numero);
      }
    } else {
      if (numero % 2 != 0) {
        Serial.print("Impar: ");
        Serial.println(numero);
      }
    }
    numero += 1;
  }
}

void loop() {
  // Não faz nada
}