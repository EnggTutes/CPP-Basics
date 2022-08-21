#include<iostream>
using namespace std;
int main()
{
	cout<<" \n ************\t Calculate of Digit \t**************\n";
	int first,second,third,fourth,fifth;
	int number, sum = 0;
	cout<<"\n Enter a 5 Digit number: \t";
	cin>>number;

	first = number % 10;
	number = number / 10;

	second = number % 10;
	number = number / 10;

	third = number % 10;
	number = number / 10;

	fourth = number % 10;
	number = number / 10;

	fifth = number % 10;
	
	sum = first + second + third + fourth + fifth;
	
	cout<<"\n Sum of Five Digit number is : \t"<<sum<<"\n";
	
	cout<<"\n lets reverse this number\n";
	
	int reverse;
	reverse = (fifth*1) + (fourth*10) + (third*100) + (second*1000) + (first*10000);
	
	cout<<"\n Rever number is \t"<<reverse<<"\n";
	
	return 0;
}
