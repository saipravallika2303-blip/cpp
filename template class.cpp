#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }
};

int main()
{
    Calculator<int> c1(10, 20);

    cout << "Integer values:" << endl;
    c1.add();
    c1.multiply();

    Calculator<float> c2(5.5, 2.5);

    cout << "\nFloat values:" << endl;
    c2.add();
    c2.multiply();

    return 0;
}
