#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, root1, root2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        cout << "Both roots are equal." << endl;
        cout << "Root = " << root1 << endl;
    }
    else
    {
        cout << "Roots are imaginary." << endl;
    }

    return 0;
}
