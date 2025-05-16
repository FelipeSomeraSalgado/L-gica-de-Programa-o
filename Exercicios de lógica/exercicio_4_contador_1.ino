// C++ code
//
 void setup()
{
  Serial.begin(9600);
    
    int contadorWhile = 1; 
  
  while(contadorWhile <= 100){
    Serial.println(contadorWhile);
    contadorWhile+=2;
}
  }
void loop()
{
 delay(2000);
}