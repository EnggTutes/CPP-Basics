#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 5;
    bool result;

    result = a < b;
    cout << a << " < " << b << " = " << result << endl;
    result = a > b;
    cout << a << " > " << b << " = " << result << endl;
    result = a <= b;
    cout << a << " <= " << b << " = " << result << endl;
    result = a >= b;
    cout << a << " >= " << b << " = " << result << endl;
    result = a != b;
    cout << a << " != or <> " << b << " = " << result << endl;
    result = a == b;
    cout << a << " == " << b << " = " << result << endl;
}