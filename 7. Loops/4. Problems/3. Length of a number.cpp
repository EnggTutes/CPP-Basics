#include <iostream>
using namespace std;

int main()
{
    int number, length = 0;

    cout << "\n Enter a number: ";
    cin >> number;

    while (number)
    {
        length++;
        number /= 10;
    }

    cout << "\n Length of a number is: " << length;
}