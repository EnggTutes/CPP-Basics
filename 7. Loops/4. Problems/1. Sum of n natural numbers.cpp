#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "\n Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "\n Sum of " << n << " natural numbers is: " << sum;

    cout << "\n ========================================================================";
    cout << "\n\t sum of n user entered numbers";

    int number;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "\n Enter a number " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "\n Sum of " << n << " natural numbers is: " << sum;
}