#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 90;

public:
    void display(int bonus = 5)
    {
        cout << "Marks = " << marks << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Total Marks = " << marks + bonus << endl;
    }
};

int main()
{
    Student s;

    s.display();

    return 0;
}
