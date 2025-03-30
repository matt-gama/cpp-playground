#include <iostream>
#include <string.h>

using namespace std;

void inverter_string(char nome[])
{
    int tam = strlen(nome);
    // for(tam = 0; nome[tam];tam++);
    for (int i = tam - 1; i >= 0; i--)
        cout << nome[i];
    cout << endl;
}

int main(int argc, char **argv)
{
    char nome[] = {'m', 't', 'h', '_', 'g', 'a', 'm', 'a', '\0'};
    int i = 0;

    while (nome[i] != '\0')
        cout << nome[i++];
    cout << endl;
    inverter_string(nome);

    if (isalpha(nome[0]))
    {
        cout << "Caractere alfabetico" << endl;
    }
    else
    {
        cout << "Caractere não é alfabetico" << endl;
    }

    /*
    do
    {
        cout << nome[i];
    }
    while(nome[i++]);
    */

    return 0;
}