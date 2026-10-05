#include <iostream>
using namespace std;

class Number {
    int x, y;

public:
    Number(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Unary operator -
    Number operator-() {
        return Number(-x, -y);
    }

    // Binary operator +
    Number operator+(Number n) {
        return Number(x + n.x, y + n.y);
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Number n1(10, 20);
    Number n2(5, 8);

    cout << "Original n1: ";
    n1.display();

    Number n3 = -n1;
    cout << "After unary -: ";
    n3.display();

    Number n4 = n1 + n2;
    cout << "After binary +: ";
    n4.display();

    return 0;
}
