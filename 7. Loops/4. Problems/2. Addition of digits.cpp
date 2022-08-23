#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;

    cout << "\n Enter a number: ";
    cin >> number;

    while (number)
    {
        sum += number % 10;
        number /= 10;
    }
    cout << "\n Sum of digits of " << number << " is: " << sum;
}