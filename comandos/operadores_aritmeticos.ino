// C++ code
/*
Operadores artimenticos:
+ = adicao
- = subtração
* = multiplicação
% = resto
/ = divisao 
= = operador de atribuição


*/

int adicao = 1 + 1;

int abs_adc = 1 + adicao;

int abs_sub = 2 - 1;

int abs_mult = 2 * 4;

int abs_div  = 3 / 3;

float abs_resto = (2 % 3);



void setup()
{
  Serial.begin(9600);
  Serial.println(abs_adc);
  Serial.println(abs_sub);
  Serial.println(abs_mult);
  Serial.println(abs_div);
  Serial.println(abs_resto);
}

void loop()
{
  
}