#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    float arrf[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout
        << "\n Integer Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }

    cout << "\n Integer Array is: ";
    for (int element : arr)
    {
        cout << " " << element;
    }

    cout << "\n Float Array is: ";
    for (float element : arrf)
    {
        cout << " " << element;
    }

    cout << "\n Integer and Float Array using auto keyword is: ";
    for (auto element : arrf)
    {
        cout << " " << element;
    }
    cout << "\n";
    for (auto element : arr)
    {
        cout << " " << element;
    }

    cout << "\n ====================================================================";

    cout << "\n Incrementing elements of the array by 2: ";
    for (auto element : arr)
    {
        element += 2;
        cout << " " << element;
    }
    cout << "\n After incrementation, the array is: ";
    for (auto element : arr)
    {
        cout << " " << element;
    }
    cout << "\n ====================================================================";

    cout << "\n Incrementing elements of the array by 2 by using reference variable: ";
    for (auto &element : arr)
    {
        element += 2;
        cout << " " << element;
    }
    cout << "\n After incrementation, the array is: ";
    for (auto element : arr)
    {
        cout << " " << element;
    }
    cout << endl;
}