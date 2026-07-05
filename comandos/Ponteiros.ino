int n = 1;
//alocando o ponteiro a variavel n
int * ponteiro = &n;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //mostrando o valor da variavel n pelo ponteiro
  Serial.println(* ponteiro);
  //alterando o valor da variavel n pelo ponteiro
  *ponteiro = 12;
  //ambos retornam o mesmo numero
  Serial.println(n);
  Serial.println(* ponteiro);
  //criando a variavel v
  int v = 55;
  //
  //alocando o mesmo ponteiro a variavel v
  ponteiro = &v;
  Serial.println(*ponteiro);
}

void loop() {
  // put your main code here, to run repeatedly:

}