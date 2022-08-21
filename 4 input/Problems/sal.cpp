// Ramesh’s basic salary is input through the keyboard.
// His dearness allowance is 40% of basic salary,
// and house rent allowance is 20% of basic salary.
//  Write a program to calculate his gross salary.

#include<iostream>
using namespace std;
int main()
{
	cout<<" \n ************\t Salary Calculation \t**************\n";
	float sal;

	cout<<"\n\t Enter Ramesh Basic Salary : \t";
	cin>>sal;

	float DA =  sal * 40 / 100;// Adding 40% DA to ramesh Salary
	float HRA =  sal * 20 / 100;// Adding 20% HRA to ramesh Salary
	sal = sal + DA + HRA;
	
	cout<<"\n Total salary of Ramesh is : \t"<<sal<<"\n";
	return 0;
}