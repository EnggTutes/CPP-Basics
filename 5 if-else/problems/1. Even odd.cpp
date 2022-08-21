#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "\n Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "\n Number is even";
    else
        cout << "\n Number is odd";
}