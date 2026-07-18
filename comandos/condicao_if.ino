/*
== (igual a)
> (maior que)
>= (maior que ou igual a)

Operadores Booleanos
! (NÂO logico)
&& (E logico)
|| (OU logico)

*/

int porta = 12;

void setup()
{
	pinMode(porta, OUTPUT);
  	digitalWrite(porta, HIGH);
  	delay(2000);
  	digitalWrite(porta,LOW);
  	delay(2000);
  	digitalWrite(porta,HIGH);
  
  	int valor_1 = 4;
  	int valor_2 = 3;
  	bool b = false;
  
  if(valor_1 >= valor_2 || b == true)
  {
    digitalWrite(porta,HIGH);
  }
  else if(valor_1 <= valor_2 && b == false)
  {
  	digitalWrite(porta,LOW);
  }
  else
  {
    digitalWrite(porta,LOW);
  }  
  	
}

void loop()
{

}