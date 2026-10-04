#include <iostream>
using namespace std;

class Student
{
public:
    // Constructor
    Student()
    {
        cout << "Constructor is called." << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor is called." << endl;
    }
};

int main()
{
    Student s;

    cout << "Object is being used." << endl;

    return 0;
}
