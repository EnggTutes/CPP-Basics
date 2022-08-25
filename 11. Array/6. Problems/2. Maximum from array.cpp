#include <iostream>
using namespace std;

int maxOfArray(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[5] = {10, 20, 51, 60, 70}, sum;

    cout << maxOfArray(arr, 5)
         << endl;
}