int escolhaDaOperacao;
float resultado;


float somar(float numero1Param, float numero2Param = 0){
  resultado = numero1Param + numero2Param;
  return resultado;
  //Serial.println("Boom!! seu resultado eh " + String(resultado));
  
}float subtrair(float numero1Param, float numero2Param = 0){
  resultado = numero1Param - numero2Param;
  return resultado;

}float multiplicar(float numero1Param, float numero2Param = 0){
  resultado = numero1Param * numero2Param;
  return resultado;
  
}float dividir(float numero1Param, float numero2Param = 0){
  resultado = numero1Param / numero2Param;
  return resultado;
  
}


void setup()
{
 Serial.begin(9600);
  
  int contador = 0;
  float numero1;
  float numero2;
 
  
  do{
     Serial.println("Bem-vindo(a) a  calculadora tralalero tralala !!!");
     Serial.println("Escolha uma opreracao:");
     Serial.println("1 - Somar");
     Serial.println("2 - Subtrair");
     Serial.println("3 - Multiplicar");
     Serial.println ("4 - Dividir");
     while (!Serial.available()){}
     escolhaDaOperacao = Serial.parseInt();
    
    
    
     Serial.println("Para conseguirmos fazer a operacao matematica na calculadora do tralalero tralala,precisamos que voce digite 2 numeros");
     Serial.println ("Digite o primeiro numero:");
     while(!Serial.available()){}
     numero1 = Serial.parseFloat();
    
     Serial.println ("Digite o segundo numero:");
     while(!Serial.available()){}
     numero2 = Serial.parseFloat();
    
     switch(escolhaDaOperacao){
       case 1:
         //somar(numero1, numero2);
         //somar(numero1);
         float retornoFuncaoSomar;
         retornoFuncaoSomar = somar(numero1, numero2);
         Serial.println(retornoFuncaoSomar);
          break;
       
       case 2:
         float retornoFuncaoSubtrair;
         retornoFuncaoSubtrair = subtrair(numero1, numero2);
         Serial.println(retornoFuncaoSubtrair);
          break;
       
       case 3:
         float retornoFuncaoMultiplicar;
         retornoFuncaoMultiplicar = multiplicar(numero1, numero2);
         Serial.println(retornoFuncaoMultiplicar);
          break;
       
       case 4:
         float retornoFuncaoDividir;
         retornoFuncaoDividir = dividir(numero1, numero2);
         Serial.println(retornoFuncaoDividir);
          break;
       
       default:
         Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4. ;)");
     }
    
     Serial.println("Voce deseja voltar ao menu? Digite sim ou nao ( em minusculo, por favor).");
     while (!Serial.available()){}
     
    if(Serial.readString()=="sim"){
     contador = 1;
    }
    else{
     contador = 0;
      Serial.println("Até breve prr prr patapim");
      Serial.println("Caso queira voltar ao menu do tralalero tralala, reinicie o programa ;");
     
    }
    
     
  }
  while(contador != 0);
}

void loop()
{
 // sem instruções
}