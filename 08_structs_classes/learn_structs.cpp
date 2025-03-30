#include <iostream>
#include <string.h>

using namespace std;

struct Person
{
private:
    int age;

public:
    // contructor
    Person(int age);

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return age;
    }
};

Person::Person(int age)
{
    setAge(26);
}

int main(int argc, char *argv[])
{
    Person p(25);
    cout << p.getAge() << endl;
    return 0;
}
