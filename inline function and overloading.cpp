#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int value) : length(value) {}

    // Declares displayLength as a friend function
    friend void displayLength(const Box& box);
};

// A friend function can access the class's private members
void displayLength(const Box& box) {
    cout << "Box length: " << box.length << '\n';
}

int main() {
    Box box(10);
    displayLength(box);

    return 0;
}

