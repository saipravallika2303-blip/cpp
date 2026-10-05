#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void area() = 0;   // Pure virtual function
};

// Circle
class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Rectangle
class Rectangle : public Shape {
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

// Triangle
class Triangle : public Shape {
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() override {
        cout << "Area of Triangle = "
             << 0.5 * base * height << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(8, 6);

    c.area();
    r.area();
    t.area();

    return 0;
}
