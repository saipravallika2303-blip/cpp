#include <iostream>
using namespace std;

namespace First
{
    int value = 10;
}

namespace Second
{
    int value = 20;
}

class Student
{
public:
    void display();
};

void Student::display()
{
    cout << "Scope Resolution Operator is used." << endl;
}

int main()
{
    Student s;
    s.display();

    cout << "Value from First namespace = "
         << First::value << endl;

    cout << "Value from Second namespace = "
         << Second::value << endl;

    return 0;
}
