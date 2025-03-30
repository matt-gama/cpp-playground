/*
Vemos sobre operadores aritmeticos
NOTAS IMPORTANTES
- Se por acaso inicializar uma variavel e não atribui um valor a ela, o sistema pegara um "lixo" alocado na memória


*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    float result;

    n1 = 10;
    n2 = 20;

    result = n1 + n2;       // Soma entre valores
    cout << result << endl; // result = 30

    result = n1 / n2;       // divisão entre valores
    cout << result << endl; // result = 0

    result = (float)n1 / n2; // divisão entre valores usando cast para mudar um tipo de variavel
    cout << result << endl;  // result = 0.5

    result = n1 * n2;       // multiplicação entre valores
    cout << result << endl; // result = 200

    result = n1 % n2;       // chamamos de módulo esse operador retorna o resto da divisão de uma operação
    cout << result << endl; // result = 10

    // incrementado valor
    int n = 10;
    n++; // o mesmo seria para n = n+1;
    cout << n << endl;

    // incrementando algum outro valor
    int x = 10;
    /*
    Nesse caso eu poderia usar de qualquer operador para concluir essa operação
    exemplo seria:
     x -= 5; // resultado 5
     x *= 5; // resultado 50
     x /= 5; // resultado 2

    */
    x += 5; // resultado 15 o mesmo seria se x = X + 5;
    cout << x << endl;

    // Efetuando calculos sequenciais
    int number1 = 5, number2 = 10;
    float result_count; // float usa 4 bytes de memorio já o double pode ocupar ate 8 bytes

    result_count = static_cast<double>(number1 + number2) / 2; // aqui eu converto o number1  e number2 para double para eu o resultado final não seje truncado para inteiro

    cout << result_count << endl;

    return 0;
}