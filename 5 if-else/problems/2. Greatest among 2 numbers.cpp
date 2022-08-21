#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "\n Enter a number 1: ";
    cin >> number1;
    cout << "\n Enter a number 2: ";
    cin >> number2;

    if (number1 == number2)
        cout << "\n Both the numbers are equal";
    else if (number1 > number2)
        cout << "\n number 1 is greater than number 2";
    else
        cout << "\n number 2 is greater than number 1";
}