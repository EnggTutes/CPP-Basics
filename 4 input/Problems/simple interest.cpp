#include<iostream>
using namespace std;
int main()
{
	cout<<" \n ************\t simple interest Calculation \t**************\n";
	int prinicple,interest,year;
	cout<<"\n\t Enter the Principle amount: ";
	cin>>prinicple;
	cout<<"Rate of Interest: ";
	cin>>interest;
	cout<<"number of years: ";
	cin>>year;

	int final_amount = 0;
	final_amount = prinicple + ( prinicple * interest * year / 100);
	cout<<"\n Final amount is : \t"<<final_amount<<"\n";
	return 0;
}
