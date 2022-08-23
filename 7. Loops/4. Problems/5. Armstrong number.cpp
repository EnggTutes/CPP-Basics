#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number, number_copy, length = 0, armstrong;
    cout << "Enter a three-digit integer: ";
    cin >> number;
    number_copy = number;
    armstrong = number;

    while (number)
    {
        length++;
        number /= 10;
    }

    int arm_copy = 0;

    while (number_copy)
    {
        arm_copy += pow(number_copy % 10, length);
        number_copy /= 10;
    }

    if (arm_copy == armstrong)
        cout << "\n"
             << armstrong << " is an Armstrong number.";
    else
        cout << "\n"
             << armstrong << " is not an Armstrong number.";

    return 0;
}