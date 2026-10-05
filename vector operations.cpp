#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";

    for (int x : v)
        cout << x << " ";

    // Add another element
    v.push_back(40);

    cout << "\nAfter push_back: ";
    for (int x : v)
        cout << x << " ";

    // Remove last element
    v.pop_back();

    cout << "\nAfter pop_back: ";
    for (int x : v)
        cout << x << " ";

    cout << "\nSize of vector = " << v.size();

    return 0;
}
