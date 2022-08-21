#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"\n Enter a number: ";
    cin>>a;

    cout<<"\n Result 1 = positive number";
    cout<<"\n Result 0 = negative number";
    cout<<"\n Result is: "<<bool(a >= 0);
}