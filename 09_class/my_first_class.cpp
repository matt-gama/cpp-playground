#include <iostream>
#include <string.h>

using namespace std;

// Created a new class nomed "Pessoa"
class Pessoa
{
public:
    char nome[100];
    char cpf[20];
    int idade;
};

int getIdade(Pessoa pessoa[], char nome[])
{
    int tam = sizeof(pessoa);

    for (int i = 0; i < tam; i++)
    {
        if (strcmp(nome, pessoa[i].nome) == 0)
            return pessoa[i].idade;
    };
    return -1;
};

int main(int argc, char *argv[])
{
    // instance's Pessoa
    Pessoa p1;

    strcpy(p1.nome, "John");
    strcpy(p1.cpf, "123456.789-10");
    p1.idade = 35;

    cout << "Nome: " << p1.nome << endl;

    // Creating any class in one command

    Pessoa pessoas[3] = {
        {"Andrew", "123.456.789-70", 32},
        {"Mary", "123.456.789-25", 27},
        {"Brian", "123.456.789-36", 15}};

    cout << "Nome: " << pessoas[0].nome << " Idade: " << getIdade(pessoas, pessoas[0].nome) << endl;
    cout << "Nome: " << pessoas[1].nome << " Idade: " << getIdade(pessoas, pessoas[1].nome) << endl;
    cout << "Nome: " << pessoas[2].nome << " Idade: " << getIdade(pessoas, pessoas[2].nome) << endl;

    return 0;
}