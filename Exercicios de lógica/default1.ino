// C++ code
int opcao = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha uma fruta:");
  Serial.println("1 - banana");
  Serial.println("2 - maca");
  Serial.println("3 - tomate");
  Serial.println("4 - laranja");
  while (! Serial.available());
  int opcao = Serial.parseInt();
  
  switch(opcao){
  case 1:
  Serial.println("Opcao escolhida: banana");
  break;  
  case 2:
  Serial.println("Opcao escolhida: maca");
  break;  
  case 3:
  Serial.println("Opcao escolhida: tomate");
  break;
  case 4:
  Serial.println("Opcao escolhida: laranja");
  break;
  default:
   Serial.println("Nao temos essa opcao");  
  }
delay(2000);
}