//Faça um programa que receba um número e exiba o seu dobro.

//Declaração de Variáveis
long numero = 0;
long numeroDobro = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite um número");
  while(!Serial.available());
  numero = Serial.parseInt();
  
  
  //processamento
  numeroDobro = numero * 2;
  
  //saída
  Serial.println("O dobro do número eh: " + String(numeroDobro));
  
  delay(1000);
}