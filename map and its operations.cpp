#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> myMap;

    // Insert elements
    myMap["Apple"] = 100;
    myMap["Banana"] = 150;
    myMap["Mango"] = 200;

    cout << "Map elements:" << endl;

    for (auto item : myMap)
    {
        cout << item.first << " : "
             << item.second << endl;
    }

    // Access an element
    cout << "\nPrice of Apple = "
         << myMap["Apple"] << endl;

    // Insert another element
    myMap["Orange"] = 120;

    cout << "\nAfter inserting Orange:" << endl;

    for (auto item : myMap)
    {
        cout << item.first << " : "
             << item.second << endl;
    }

    // Delete an element
    myMap.erase("Banana");

    cout << "\nAfter deleting Banana:" << endl;

    for (auto item : myMap)
    {
        cout << item.first << " : "
             << item.second << endl;
    }

    return 0;
}
