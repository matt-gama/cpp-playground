#include <iostream>

using namespace std;

class Conta
{
public:
    int numero;
    double saldo;

    double depositar(double quantidade);

    double retirar(double quantidade)
    {
        if (saldo >= quantidade)
            saldo -= quantidade;
        return saldo;
    }
};

double Conta::depositar(double quantidade)
{
    if (quantidade > 0)
        this->saldo += quantidade;
    return this->saldo;
}

int main()
{
    Conta c = {1, 100.75};
    Conta *pc = &c;

    (*pc).numero = 1;
    pc->saldo = 200.75;

    cout << "Saldo: " << c.saldo << endl;
    cout << "Saldo depois do deposito: " << c.depositar(-100) << endl;
    cout << "Saldo depois de retirar: " << c.retirar(50000) << endl;

    return 0;
}