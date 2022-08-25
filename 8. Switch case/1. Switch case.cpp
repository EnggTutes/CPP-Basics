#include <iostream>
using namespace std;

int main()
{
    int a = 102;

    switch (a)
    {
    case 100:
        cout << "\n value of a is 100";
        break;
    case 101:
        cout << "\n value of a is 101";
        break;
    case 102:
        cout << "\n value of a is 102";
        break;
    case 103:
        cout << "\n value of a is 103";
        break;
    default:
        cout << "\n Value of a is invalid";
        break;
    }

    cout << "\n========================================================";

    switch (a)
    {
    case 100:
        cout << "\n value of a is 100";
        break;
    case 105 - 4:
        cout << "\n value of a is 101";
        break;
    case 100 + 2:
        cout << "\n value of a is 102";
        break;
    case (208 / 2) - 1:
        cout << "\n value of a is 103";
        break;
    default:
        cout << "\n Value of a is invalid";
        break;
    }

    cout << "\n========================================================";

    switch (a)
    {
    case 100:
        cout << "\n value of a is 100";
        break;
    case 100 + 2:
        cout << "\n value of a is 101";
    case 105 - 4:
        cout << "\n value of a is 102";
    case (208 / 2) - 1:
        cout << "\n value of a is 103";
        break;
    default:
        cout << "\n Value of a is invalid";
        break;
    }

    cout << "\n========================================================";

    char ch = 'c';
    switch (ch)
    {
    case 'a':
        cout << "\n value of ch is a";
        break;
    case 'b':
        cout << "\n value of ch is b";
        break;
    case 'c':
        cout << "\n value of ch is c";
        break;
    case 'd':
        cout << "\n value of ch is d";
        break;
    default:
        cout << "\n Value of ch is invalid";
        break;
    }

    cout << "\n========================================================";

    switch (ch)
    {
    case 97:
        cout << "\n value of ch is a";
        break;
    case 'b':
        cout << "\n value of ch is b";
        break;
    case 99:
        cout << "\n value of ch is c";
        break;
    case 'd':
        cout << "\n value of ch is d";
        break;
    default:
        cout << "\n Value of ch is invalid";
        break;
    }

    cout << "\n========================================================";

    // You need to add curly brackets for the case if you want to declare a string in a case
    switch (ch)
    {
    case 97:
    {
        string name;
        cout << "\n value of ch is a";
        break;
    }
    case 'b':
        cout << "\n value of ch is b";
        break;
    case 99:
        cout << "\n value of ch is c";
        break;
    case 'd':
        cout << "\n value of ch is d";
        break;
    default:
        cout << "\n Value of ch is invalid";
        break;
    }
}