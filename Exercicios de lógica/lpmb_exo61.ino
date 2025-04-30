//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.
//Declaração de Variáveis
long Polegadas = 0;
long Centimetros = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println("Digite uma Polegada");
  while( !Serial.available());
  Polegadas = Serial.parseInt();
  
  //Processamento
  Centimetros = Polegadas * 2.54;
  
  //Saída
  Serial.println("Essa polegadas em centimetros eh: " + String(Centimetros));
  
  delay(1000);
}