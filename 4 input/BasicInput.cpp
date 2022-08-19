#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // Take 1 input into a variable using 1 cin
    cout << "\n Enter a number: ";
    cin >> a;
    cout << "\n Your entered number is: " << a;

    // Take 2 inputs into 2 variables using 1 cin
    cout << "\n Enter 2 numbers: ";
    cin >> a >> b;
    cout << "\n Your entered numbers are: " << a << " and " << b;

    // Take a string input
    string name;
    cout << "\n Enter your first name: ";
    cin >> name;
    cout << "\n Your entered name is: " << name << flush;
}