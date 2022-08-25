#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "\n Enter the value of n: ";
    cin >> n;
    int arr[n];

    cout << "\n Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\n Entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    cout << "\n Entered array is: ";
    for (auto &element : arr)
    {
        cout << " " << element;
    }
}