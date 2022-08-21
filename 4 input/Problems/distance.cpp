#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<" \n ************\t Program to calculate Distance \t**************\n";
	int latitude1,longitude1,latitude2,longitude2;
	float distance;
	double pi = 3.14159265359;

	cout<<"\n\t Enter co-ordinate 1 details";
	cout<<"\n\t Enter the value of latitude: ";
	cin>>latitude1;
	cout<<"\n\t Enter the value of longitude: ";
	cin>>longitude1;

	cout<<"\n\t Enter co-ordinate 2 details";
	cout<<"\n\t Enter the value of latitude: ";
	cin>>latitude2;
	cout<<"\n\t Enter the value of longitude: ";
	cin>>longitude2;

	latitude1 = latitude1 * (pi / 180);
	latitude2 = latitude2 * (pi / 180);
	longitude1 = longitude1 * (pi / 180);
	longitude2 = longitude2 * (pi / 180);

	distance = 3963 * acos(sin(latitude1)*sin(latitude1) + cos(latitude1)*cos(longitude1) * cos(longitude2 - latitude1));
	cout<<"\n Distance is \t"<<distance<<"\n";
		
	return 0;
}