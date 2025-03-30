#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int *vet = new int[10];
    int aux[4], aux_user[4];

    cout << "Digite um numero: ";
    cin >> *(aux_user);
    cout << "Voce digitou: " << aux_user[0] << endl;

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;
    aux[3] = 40;

    for (int i = 0; i < sizeof(aux) / sizeof(int); i++)
        cout << aux[i] << endl;

    delete[] vet;
    return 0;
}
