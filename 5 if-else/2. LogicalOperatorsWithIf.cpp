#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 0;

    cout << "\n=================================================================================";

    if (a > b && b)
        cout << "\n If is true";
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (a > b || b)
        cout << "\n If is true";
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    // If you uncomment this code, you will get error
    //  if (a && a / b)
    //      cout << "\n If is true";
    //  cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (a || a / b)
        cout << "\n If is true";
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if ((a || a / b) && (b + 2 && a && a == b))
        cout << "\n If is true";
    cout << "\n This code is not related to if";
}