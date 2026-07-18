/*
Operadores de Comparação
!= (diferente de)
< (menor que)
<= (menor que ou igual a)
== (igual a)
> (maior que)
>= (maior que ou igual a)

Operadores Booleanos
! (NÂO logico)
&& (E logico)
|| (OU logico)

*/

byte c = 0;

void setup()
{
 	Serial.begin(9600);
  	pinMode(13, OUTPUT);
  	pinMode(12, OUTPUT);
  	pinMode(11, OUTPUT);
  
}

void loop()
{
	byte cR = 0;
  switch(c)
  {
  	case 1:
    	cR = 11;
    break;
	case 2:
    	cR = 12;
    break;
	case 3:
    	cR = 13;
    break;
    default:
    	c = 0;
    break;
  }
  
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(cR,HIGH);
  c++;
  delay(1000);
  
  
}