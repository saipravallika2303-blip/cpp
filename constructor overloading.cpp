#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Default constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
    }

    // Constructor with one parameter
    Student(int r)
    {
        rollNo = r;
        name = "Unknown";
    }

    // Constructor with two parameters
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;
    Student s2(101);
    Student s3(102, "Pravallika");

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    cout << "\nStudent 3:" << endl;
    s3.display();

    return 0;
}
