#include <iostream>
#include <string.h>

using namespace std;

class Person
{
public:
    char name[100];
    char cpf[20];
    int age;
};

int main(int argc, char *argv[])
{
    Person p1;
    strcpy(p1.name, "Matheus");
    strcpy(p1.cpf, "462.659.895-90");
    p1.age = 24;

    cout << "Name: " << endl;

    return 0;
}
