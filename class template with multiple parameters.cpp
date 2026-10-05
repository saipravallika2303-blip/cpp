#include <iostream>
using namespace std;

template <class T1, class T2>
class Student
{
    T1 rollNo;
    T2 marks;

public:
    Student(T1 r, T2 m)
    {
        rollNo = r;
        marks = m;
    }

    void display()
    {
        cout << "Roll Number = " << rollNo << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student<int, float> s1(101, 85.5);

    s1.display();

    return 0;
}
