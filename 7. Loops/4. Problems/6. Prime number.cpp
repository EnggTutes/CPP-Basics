#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = false;
    cout << "\n Enter a number: ";
    cin >> number;

    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            cout << "\n " << number << " is a prime number";
            isPrime = true;
            break;
        }
    }
    if (!isPrime)
        cout << "\n " << number << " is a composite number";
}