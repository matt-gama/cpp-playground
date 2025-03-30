#include <iostream>

using namespace std;

int num_global = 12;

void foo()
{
    int num = 10;
    static int num_static = 1;
    cout << "Variavel global: " << num_global << endl;
    cout << "Variavel local: " << num << endl;

    cout << "variavel statica: " << num_static << endl
         << endl;
    num_static++;
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}