#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 0;
    // Syntax:
    // if(True/False)
    // {
    //     statements which you want to be executed when if is true
    // }
    // rest of the code
    cout << "\n=================================================================================";
    if (a)
    {
        cout << "\n If is true";
    }
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (b)
    {
        cout << "\n If is true";
    }
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (a - 5)
    {
        cout << "\n If is true";
    }
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (a > b)
    {
        cout << "\n If is true";
    }
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (a)
    {
        cout << "\n If is true - line 1";
        cout << "\n If is true - line 2";
    }
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (b)
        cout << "\n If is true - line 1";
    cout << "\n Is it relatable to if or not?";
    cout << "\n This code is not related to if";

    cout << "\n=================================================================================";

    if (a > b)
        ;
    cout << "\n Is it relatable to if or not?";
    cout << "\n Is it relatable to if or not?";

    // If you uncomment following code and execute, you will get error of division by 0
    // if (a / b)
    // {
    //     cout << "\n If is true";
    // }
    // cout << "\n This code is not related to if";
}