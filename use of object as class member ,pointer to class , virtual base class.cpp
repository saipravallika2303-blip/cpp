#include <iostream>
using namespace std;

// Object as a class member
class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
    Engine e;   // Object of Engine as a class member

public:
    void startCar() {
        e.start();
        cout << "Car started" << endl;
    }
};

// Pointer to a class
class Student {
public:
    int marks;

    void display() {
        cout << "Marks = " << marks << endl;
    }
};

// this pointer
class Number {
    int value;

public:
    void setValue(int value) {
        this->value = value;
    }

    void display() {
        cout << "Value = " << this->value << endl;
    }
};

// Virtual Base Class
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {

    cout << "Object as Class Member:" << endl;
    Car car;
    car.startCar();

    cout << "\nPointer to Class:" << endl;
    Student s;
    Student *ptr = &s;
    ptr->marks = 95;
    ptr->display();

    cout << "\nThis Pointer:" << endl;
    Number n;
    n.setValue(100);
    n.display();

    cout << "\nVirtual Base Class:" << endl;
    D obj;
    obj.show();

    return 0;
}
