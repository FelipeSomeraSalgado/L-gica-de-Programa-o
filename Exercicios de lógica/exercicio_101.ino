// C++ code
//variavel
float preco = 0;
float percentual = 0;
float precoVenda = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o preco do produto");
  while (!Serial.available());
  preco = Serial.parseFloat();
  
  Serial.println("Digite o percentual desejado (%)");
  while (!Serial.available());
  percentual = Serial.parseFloat();
  
  precoVenda = preco + (preco * (percentual / 100));
  
  Serial.print("preco de venda: R$ ");
  Serial.println(precoVenda);
  
  if ( percentual <= 50){
  Serial.println("Atencao: o produto sera vendido com margem de lucro muito pequena");
  }
     delay(1000);
}


