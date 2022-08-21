// If the total selling price of 15 items and the total profit earned
// on them is input through the keyboard,
// write a program to find the cost price of one item

#include <iostream>
using namespace std;
int main()
{
	cout << " \n ************\t Calculate cost of one Item \t**************\n";
	int selling_price, profit;

	cout << "\n Enter Total Revenue:\t";
	cin >> selling_price;
	cout << "\n Enter Total profit earned:\t";
	cin >> profit;

	int cost = (selling_price - profit) / 15;

	cout << "\n \t Cost of One item is : \t" << cost << "\n";

	return 0;
}
