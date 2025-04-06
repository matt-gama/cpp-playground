#include <iostream>

#define MAX 10
using namespace std;

class Carro
{
public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

int main()
{
    Carro carros[MAX];
    int i = 0;

    while (true)
    {
        char resp;
        cout << "Digite o nome do carro: ";
        cin >> carros[i].nome;
        cout << "Digite o preco do carro: ";
        cin >> carros[i].preco;
        cout << "Deseja continuar ? [s] ou [n]: ";
        cin >> resp;
        if (resp != 's')
            break;
        cout << endl;
        i++;
    }
    cout << "Exibindo todos os carros: " << endl;
    for (int j = 0; j <= i; j++)
    {
        cout << "Carro ID: " << j << endl;
        cout << "Nome: " << carros[j].nome << endl;
        cout << "Preco: R$" << carros[j].preco << endl;
        cout << endl;
    }
    return 0;
};