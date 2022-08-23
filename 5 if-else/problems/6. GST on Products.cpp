#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string productName1, productName2;
    int productQuantity1, productQuantity2;
    float productPrice1, productPrice2;
    float total, gst;

    cout << "\n Enter product 1 name: ";
    cin >> productName1;
    cout << "\n Enter product 1 quantity: ";
    cin >> productQuantity1;
    cout << "\n Enter product 1 price: ";
    cin >> productPrice1;

    cout << "\n Enter product 2 name: ";
    cin >> productName2;
    cout << "\n Enter product 2 quantity: ";
    cin >> productQuantity2;
    cout << "\n Enter product 2 price: ";
    cin >> productPrice2;

    total = productPrice1 * productQuantity1 + productPrice2 * productQuantity2;
    if (total > 100)
        gst = total * (18.0 / 100);
    else
        gst = total * (5.0 / 100);

    cout << "\n"
         << setw(15) << "Name" << setw(12) << "Quantity" << setw(10) << "Price" << setw(10) << "Total";
    cout << "\n"
         << setw(15) << productName1 << setw(12) << productQuantity1 << setw(10) << productPrice1 << setw(10) << productQuantity1 * productPrice1;
    cout << "\n"
         << setw(15) << productName2 << setw(12) << productQuantity2 << setw(10) << productPrice2 << setw(10) << productQuantity2 * productPrice2;
    cout << "\n"
         << setw(37) << "Sub Total" << setw(10) << total;
    cout << "\n"
         << setw(37) << "GST" << setw(10) << gst;
    cout << "\n"
         << setw(37) << "Total" << setw(10) << total + gst;
}