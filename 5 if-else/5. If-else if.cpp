#include <iostream>
using namespace std;

int main()
{
    int marks = 60;

    if (marks >= 75)
        cout << "\n Grade = O";
    else if (marks >= 60)
        cout << "\n Grade = A";
    else if (marks >= 50)
        cout << "\n Grade = B";
    else if (marks >= 40)
        cout << "\n Grade = P";
    else
        cout << "\n Grade = F";
}