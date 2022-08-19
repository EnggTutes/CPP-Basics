#include <iostream>
using namespace std;

int main()
{
    if (5 > 3)
    {
        cout << "\n If 1";
        if (2 > 3)
        {
            cout << "\n If 1";
            if (3 > 3)
            {
                cout << "\n If 3";
            }
            else
            {
                cout << "\n Else 3";
            }
        }
    }
    else
    {
        cout << "\n Else 1";
    }
}