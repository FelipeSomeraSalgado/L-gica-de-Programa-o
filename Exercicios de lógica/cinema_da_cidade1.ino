int idade;

void setup()
{
  Serial.begin(9600);
  
  
  Serial.println("Esse eh o cinema da cidade");
  Serial.println();
  
  Serial.println("Porfavor digite sua idade:");
  while (!Serial.available());
  idade = Serial.parseInt();

  if (idade >=0 && idade <=9){
    Serial.println("Nessa idade apenas filmes infantis");
  } 
  else if (idade >= 10 && idade <= 13) {
    Serial.println("Filmes infantis e infantojuvenis");
  }
  else if (idade >= 14 && idade <= 17) {
    Serial.println("Filmes até classificação 14 anos");
  } 
  else if (idade >= 18 && idade <= 59) {
    Serial.println("Todos os tipos de filmes");
  }
  else if (idade >= 60 && idade<= 120) {
    Serial.println("Todos os tipos de filmes + desconto para idosos");
  }
  else {
    Serial.println("Idade inválida, verifique os dados"); 
 }
}
  void loop()
{
}