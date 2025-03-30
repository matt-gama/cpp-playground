#include <iostream>

using namespace std;

void foo(int *n)
{
    *n = 20;
}

int main(int argc, char **argv)
{
    int var = 10;
    int *pvar;

    pvar = &var;

    foo(pvar);
    cout << var << endl;

    return 0;
}