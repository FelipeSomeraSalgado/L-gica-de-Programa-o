//Calcule a média entre DUAS notas.
//variavel
int nota = 0;
int Segundanota = 0;
int frequencia = 0;
  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("Qual foi a sua primeira nota ?");
 while(! Serial.available ());
 nota = Serial.parseInt ();
  
 Serial.println("Qual foi a sua segunda nota ?");
 while(! Serial.available ());
 Segundanota = Serial.parseInt ();
  
 Serial.println("Qual foi a sua frequencia ?");
 while(! Serial.available ());
 frequencia = Serial.parseInt ();
  
 if ((nota + Segundanota) / 2 >= 6) {
    Serial.println("Sua nota esta acima da media");
  
} else { 
  Serial.println("Sua nota esta abaixo da media");
 }
   if ( frequencia >= 75) {
  Serial.println("Voce tem bastante frequencia ou seja voce passou");
  
   } else{
     Serial.println("Infelizmente voce foi reprovado por conta da frequencia");
 }
 if (nota == 10 && Segundanota == 10 && frequencia == 100) {
    Serial.println("Parabens! Nota maxima!");
    
  }else {
    Serial.println("Da proxima voce consegue nota maxima");
  }
     delay(2000);
   }