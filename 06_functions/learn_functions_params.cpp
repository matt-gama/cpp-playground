#include <iostream>
using namespace std;

/*
 - int argc : é a quantidade de argumentos que minha função pode ser passada

*/

int main(int argc, char *argv[])
{
    cout << argc << endl;    // sempre inicia com 1 pois o primeiro é o nome do arquivo
    cout << argv[0] << endl; // imprime o endereço path do arquivo
    return 0;
}
