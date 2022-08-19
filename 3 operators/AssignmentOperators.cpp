#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 5;

    cout << "\n a = " << a << " b = " << b;
    a += b;
    cout << "\n After a += b:";
    cout << "\n a = " << a << " b = " << b;
    a -= b;
    cout << "\n After a -= b:";
    cout << "\n a = " << a << " b = " << b;
    a *= b;
    cout << "\n After a *= b:";
    cout << "\n a = " << a << " b = " << b;
    a /= b;
    cout << "\n After a /= b:";
    cout << "\n a = " << a << " b = " << b;
}