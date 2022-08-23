#include <iostream>
using namespace std;

int main()
{
    float number1, number2;
    char operation;

    cout << "\n Enter an infix expression with 2 numbers and 1 operation: ";
    cin >> number1 >> operation >> number2;
    cout << "\n Result = ";
    switch (operation)
    {
    case '+':
        cout << number1 + number2;
        break;
    case '-':
        cout << number1 - number2;
        break;
    case '*':
        cout << number1 * number2;
        break;
    case '/':
        cout << number1 / number2;
        break;
    case '%':
        cout << int(number1) % int(number2);
        break;

    default:
        break;
    }
}