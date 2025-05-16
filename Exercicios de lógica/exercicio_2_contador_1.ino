// C++ code
//
void setup()
{
 Serial.begin(9600);
  
 int contadorWhile = 0; // variavel local
  
  while(contadorWhile <= 100){
    Serial.println(contadorWhile);
    contadorWhile+=5;
  }
}
void loop()
{
  delay(2000);
}