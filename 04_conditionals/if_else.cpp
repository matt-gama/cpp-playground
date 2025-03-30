#include <iostream>

using namespace std;

int main()
{
    int money = 20;

    if (money >= 50)
    {
        cout << "Eu vou ao cinema!" << endl;
    }
    else
    {
        cout << "Nao vou ao cinema" << endl;
    }

    int num = 10;

    if (num > 5)
    {
        if (num <= 10)
        {
            cout << "numero menor ou igual a 10" << endl;
        }
    }

    if ((num % 2 == 0) && num <= 10)
    {
        cout << "numero e par e menor ou igual que 10" << endl;
    }

    return 0;
}