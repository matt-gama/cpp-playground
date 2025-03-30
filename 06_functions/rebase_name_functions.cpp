#include <iostream>

using namespace std;

void mensagem(int n)
{
    cout << "Hello World " << n << endl;
}

void mensagem(char a)
{
    cout << "Hello World " << a << endl;
}

void mensagem()
{
    cout << "Hello World" << endl;
}

int main(int argc, char **argv)
{
    mensagem(10);
    mensagem('A');
    // mensagem();
    return 0;
}
