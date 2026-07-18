/*
template indica que a função é genérica.
typename T cria um tipo genérico chamado T
*/


template <typename T>
void FuncTemplate(T a, T b)
{
    Serial.println(a);
    Serial.println(b);
}

void setup()
{
    Serial.begin(9600);
    FuncTemplate(5, 5);
}

void loop()
{
}