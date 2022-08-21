#include<iostream>
using namespace std;

int main()
{
    int number1,number2;
    int temp;

    cout<<"\n Enter number1: ";
    cin>>number1;
    cout<<"\n Enter number2: ";
    cin>>number2;

    cout<<"\n\t Original Numbers";
    cout<<"\n Number 1: "<<number1;
    cout<<"\t Number 2: "<<number2;

    //Method 1
    temp = number1;
    number1 = number2;
    number2 = temp;
    
    cout<<"\n\n\n\t Swapped by Method 1";
    cout<<"\n Number 1: "<<number1;
    cout<<"\t Number 2: "<<number2;

    //Method 2
    cout<<"\n\n\n\t Swapped by Method 2";
    number1 += number2;
    number2 = number1 - number2;
    number1 -= number2;

    cout<<"\n Number 1: "<<number1;
    cout<<"\t Number 2: "<<number2;
}