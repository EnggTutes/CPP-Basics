#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number, length = 0, reversed_number = 0, number_copy;

    cout << "\n Enter a number: ";
    cin >> number;

    number_copy = number;

    while (number)
    {
        length++;
        number /= 10;
    }

    while (number_copy)
    {
        reversed_number += (number_copy % 10) * pow(10, --length);
        number_copy /= 10;
    }

    cout << "\n Reversed number is: " << reversed_number;
}