#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 5;

    cout << "\n\n================Binary arithmetic Operators=================";

    cout << "\n Addition of " << a << " and " << b << " = " << a + b;
    cout << "\n Subtraction of " << a << " and " << b << " = " << a - b;
    cout << "\n Multiplication of " << a << " and " << b << " = " << a * b;
    cout << "\n Division of " << a << " and " << b << " = " << a / b;
    cout << "\n Division of " << a << " and " << b << " (using typecasting)= " << float(a) / float(b);
    cout << "\n Modulus of " << a << " and " << b << " = " << a % b;

    cout << "\n\n\n Division of 3 and 5 (int and int) = " << 3 / 5;
    cout << "\n Division of 3.0 and 5 (float and int) = " << 3.0 / 5;
    cout << "\n Division of 3 and 5.0 (int and float) = " << 3 / 5.0;
    cout << "\n Division of 3.0 and 5.0 (float and float) = " << 3.0 / 5.0;

    cout << "\n\n\n Modulus of 3 and 5 (smaller number % greater number) = " << 3 % 5 << " (always a smaller number)";
    cout << "\n Modulus of 5 and 3 (greater number % smaller number) = " << 5 % 3;

    cout << "\n\n================Unary arithmetic Operators=================";
    cout << "\n a = " << a;
    cout << "\n ++a = " << ++a;
    cout << "\n a = " << a;
    cout << "\n a++ = " << a++;
    cout << "\n a = " << a;
    cout << "\n --a = " << --a;
    cout << "\n a = " << a;
    cout << "\n a-- = " << a--;
    cout << "\n a = " << a;
}