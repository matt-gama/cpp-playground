#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int vetor[100];
    int vetor2[] = {1, 2, 3, 4};
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            vetor[i] = i;
            cout << vetor[i] << endl;
        }
    }
    cout << vetor2[0];
    return 0;
}
