#include <iostream>
using namespace std;

// ---------------- Single Inheritance ----------------
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// ---------------- Multiple Inheritance ----------------
class Father {
public:
    void fatherProperty() {
        cout << "Father's property" << endl;
    }
};

class Mother {
public:
    void motherProperty() {
        cout << "Mother's property" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childProperty() {
        cout << "Child's property" << endl;
    }
};

// ---------------- Multilevel Inheritance ----------------
class Grandfather {
public:
    void grandfather() {
        cout << "Grandfather class" << endl;
    }
};

class Parent : public Grandfather {
public:
    void parent() {
        cout << "Parent class" << endl;
    }
};

class Son : public Parent {
public:
    void son() {
        cout << "Son class" << endl;
    }
};

// ---------------- Hierarchical Inheritance ----------------
class Vehicle {
public:
    void start() {
        cout << "Vehicle starts" << endl;
    }
};

class Car : public Vehicle {
public:
    void driveCar() {
        cout << "Car is driving" << endl;
    }
};

class Bike : public Vehicle {
public:
    void rideBike() {
        cout << "Bike is riding" << endl;
    }
};

// ---------------- Hybrid Inheritance ----------------
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {

    cout << "Single Inheritance:" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\nMultiple Inheritance:" << endl;
    Child c;
    c.fatherProperty();
    c.motherProperty();
    c.childProperty();

    cout << "\nMultilevel Inheritance:" << endl;
    Son s;
    s.grandfather();
    s.parent();
    s.son();

    cout << "\nHierarchical Inheritance:" << endl;
    Car car;
    car.start();
    car.driveCar();

    Bike bike;
    bike.start();
    bike.rideBike();

    cout << "\nHybrid Inheritance:" << endl;
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}
