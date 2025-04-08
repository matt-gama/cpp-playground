#include <iostream>

using namespace std;

class Conta
{
public:
    int numero;
    double saldo;

    double depositar(double quantidade)
    {
        if (quantidade > 0)
            saldo += quantidade;
        return saldo;
    }

    double retirar(double quantidade)
    {
        if (saldo >= quantidade)
            saldo -= quantidade;
        return saldo;
    }
};

int main()
{
    Conta c;

    c.numero = 1;
    c.saldo = 1000.75;

    cout << "Saldo: " << c.saldo << endl;
    cout << "Saldo depois do deposito: " << c.depositar(100) << endl;
    cout << "Saldo depois de retirar: " << c.retirar(50) << endl;

    // se baseando nas limitações da class
    cout << endl;
    cout << "Saldo: " << c.saldo << endl;
    cout << "Saldo depois do deposito: " << c.depositar(-100) << endl;
    cout << "Saldo depois de retirar: " << c.retirar(50000) << endl;

    return 0;
}