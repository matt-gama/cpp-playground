#include <iostream>

using namespace std;

bool par(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}

int main(int argc, char **argv)
{
    int n;
    cout << "Digite um numero para ver se e par mesmo: ";
    cin >> n;

    if (par(n))
        cout << "O numero " << n << " eh par." << endl;
    else
        cout << "O numero " << n << " eh impar." << endl;

    return 0;
}
