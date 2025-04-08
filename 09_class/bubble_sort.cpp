#include <iostream>
#include <string.h>

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

// Ordenando utilizando algoritmo bubble sort
void ordena(Carro carros[], int tam)
{
    Carro aux;

    for (int i = tam; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (strcmp(carros[j - 1].nome, carros[j].nome) == 1)
            {
                // strcpy(aux.nome, carros[j - 1].nome);
                aux = carros[j - 1];
                carros[j - 1] = carros[j];
                carros[j] = aux;
            };
        };
    };
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

    ordena(carros, i);

    cout << "Exibindo todos os carros Lista ordenada alfabetica: " << endl;
    for (int j = 0; j <= i; j++)
    {
        cout << "Carro ID: " << j << endl;
        cout << "Nome: " << carros[j].nome << endl;
        cout << "Preco: R$" << carros[j].preco << endl;
        cout << endl;
    }
    return 0;
};