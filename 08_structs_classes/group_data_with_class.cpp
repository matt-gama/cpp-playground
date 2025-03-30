#include <iostream>
#include <string.h>
using namespace std;

/*
- Here I learned how I made class such us group by person's caracteristc
*/

typedef struct
{
    char name[2];
    int age;

} t_person;

int main(int argc, char *argv[])
{
    /*
    char people[10] [100] = {"marcos", "joao", "maria"};
    int age[3] = {26, 30, 20};

    cout << "Name: " << people[0] << endl;
    cout << "Age: " << age[0] << endl;
    */

    t_person p[50]; // Here I can put 50 data people

    strcpy(p[0].name, "matheus");
    p[0].age = 24;

    cout << "Name: " << p[0].name << endl;
    cout << "Age: " << p[0].age << endl;

    return 0;
}
