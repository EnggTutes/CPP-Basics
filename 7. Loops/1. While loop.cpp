#include <iostream>
using namespace std;

int main()
{
    int i;

    i = 0;        // initialization
    while (i < 5) // True / False
    {
        cout << "\t i = " << i;
        i++; // increment/decrement
    }
    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    i = 0;         // initialization
    while (i <= 5) // True / False
    {
        cout << "\t i = " << i;
        i++; // increment/decrement
    }
    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    i = 5;        // initialization
    while (i > 0) // True / False
    {
        cout << "\t i = " << i;
        i--; // increment/decrement
    }
    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    i = 5;         // initialization
    while (i >= 1) // True / False
    {
        cout << "\t i = " << i;
        i--; // increment/decrement
    }
    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    i = 1;         // initialization
    while (i <= 5) // True / False
    {
        cout << "\t i = " << i;
        i++; // increment/decrement
    }
    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    i = 0;        // initialization
    while (false) // True / False
    {
        cout << "\t i = " << i;
        i++; // increment/decrement
    }
    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    // If you uncomment the following code, it will go into infinite loop

    // i = 0;       // initialization
    // while (true) // True / False
    // {
    //     cout << "\t i = " << i;
    //     i++; // increment/decrement
    // }
    // cout << "\n After loop, value of i = " << i;

    // cout << "\n=================================================================================\n";

    // i = 0;        // initialization
    // while (i < 5) // True / False
    // {
    //     cout << "\t i = " << i;
    // }
    // cout << "\n After loop, value of i = " << i;
}