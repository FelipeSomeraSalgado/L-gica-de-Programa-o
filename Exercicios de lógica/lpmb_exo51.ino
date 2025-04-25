//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

long  medidaCentimetros = 0;
long  numeroPolegadas = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println("Digite uma medida (em Centimetros)");
  while ( !Serial.available() );
  medidaCentimetros = Serial.parseInt();
  
  //Processamento
  numeroPolegadas = medidaCentimetros / 2.54;
  
  //Saída
  Serial.println("Medida em Polegadas: " + String(numeroPolegadas));
  
  delay(1000);

}