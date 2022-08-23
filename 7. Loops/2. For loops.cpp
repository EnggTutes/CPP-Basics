#include <iostream>
using namespace std;

int main()
{
    // for(initilization statement(s) ; true/false ; increment(s)/decrement(s))
    int i, j;
    for (i = 0; i < 5; i++)
    {
        cout << "\t " << i;
    }
    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    for (i = 5; i > 0; i--)
    {
        cout << "\t " << i;
    }

    cout << "\n After loop, value of i = " << i;

    cout << "\n=================================================================================\n";

    for (i = 5, j = 0; i > 0 && j < 5; i--, j++)
    {
        cout << "\n i = " << i << " j = " << j;
    }

    cout << "\n After loop, value of i = " << i;
    cout << "\n After loop, value of j = " << j;
}