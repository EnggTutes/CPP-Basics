#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3, number4, number5, max = number1;

    cout << "\n Enter a number 1: ";
    cin >> number1;
    cout << "\n Enter a number 2: ";
    cin >> number2;
    cout << "\n Enter a number 3: ";
    cin >> number3;
    cout << "\n Enter a number 4: ";
    cin >> number4;
    cout << "\n Enter a number 5: ";
    cin >> number5;

    if (number2 > max)
        max = number2;
    else if (number3 > max)
        max = number3;
    else if (number4 > max)
        max = number4;
    else if (number5 > max)
        max = number5;

    cout << "\n The greatest number among 5 number is: " << max;
}