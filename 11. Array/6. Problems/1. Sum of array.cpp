#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {10, 20, 51, 60, 70}, sum;

    cout << sumOfArray(arr, 5)
         << endl;
}