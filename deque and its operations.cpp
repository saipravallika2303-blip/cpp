#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // Insert elements
    d.push_back(20);
    d.push_back(30);
    d.push_front(10);

    cout << "Deque elements: ";

    for (int x : d)
        cout << x << " ";

    // Delete from front
    d.pop_front();

    cout << "\nAfter pop_front: ";

    for (int x : d)
        cout << x << " ";

    // Delete from back
    d.pop_back();

    cout << "\nAfter pop_back: ";

    for (int x : d)
        cout << x << " ";

    return 0;
}
