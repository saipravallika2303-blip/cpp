#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter 1 for integer exception: ";
    cout << "\nEnter 2 for character exception: ";
    cout << "\nEnter 3 for double exception: ";
    cout << "\nEnter choice: ";
    cin >> choice;

    try
    {
        if (choice == 1)
            throw 10;
        else if (choice == 2)
            throw 'A';
        else if (choice == 3)
            throw 10.5;
        else
            cout << "No exception." << endl;
    }

    catch (int x)
    {
        cout << "Integer exception caught: " << x << endl;
    }

    catch (char x)
    {
        cout << "Character exception caught: " << x << endl;
    }

    catch (double x)
    {
        cout << "Double exception caught: " << x << endl;
    }

    return 0;
}
