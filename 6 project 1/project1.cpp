#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    // User variables
    string username = "abcd", password = "Abcd@1234";
    string userEnteredUsername = "", userEnteredPassword = "";
    float balance = 0.0;

    // Product variables
    int quantity1 = 10, quantity2 = 5;
    float price1 = 20.5, price2 = 60.0;
    string name1 = "Bread", name2 = "Milk";

    system("clear");

    cout << "\n Enter username: ";
    cin >> userEnteredUsername;
    userEnteredPassword = getpass("\n Enter password: ");

    if (username == userEnteredUsername && password == userEnteredPassword)
    {
        system("clear");
        cout << "\n Enter your balance for the shopping: ";
        cin >> balance;
        system("clear");

        cout << "\n\t\t\t *****Avalable Items*****";
        cout << "\n\t Name \t Quantity \t Price";
        cout << "\n\t " << name1 << " \t " << quantity1 << " \t\t " << price1;
        cout << "\n\t " << name2 << " \t " << quantity2 << " \t\t " << price2;
        cout << "\n\t\t\t\t Balance: " << balance;

        int purchasedQuantity1, purchasedQuantity2;
        float total = 0;
        bool purchased1 = false, purchased2 = false;

        cout << "\n\t Enter quantity of product 1 to be purchased: ";
        cin >> purchasedQuantity1;
        if (quantity1 >= purchasedQuantity1)
        {
            if (price1 * purchasedQuantity1 <= balance)
            {
                total = price1 * purchasedQuantity1;
                balance -= total;
                purchased1 = true;
            }
            else
            {
                cout << "\n Insufficient balance";
            }
        }
        else
        {
            cout << "\n Requested quantity is not available";
        }

        cout << "\n\t Enter quantity of product 2 to be purchased: ";
        cin >> purchasedQuantity2;
        if (quantity2 >= purchasedQuantity2)
        {
            if (price2 * purchasedQuantity2 <= balance)
            {
                total += price2 * purchasedQuantity2;
                balance -= total;
                purchased2 = true;
            }
            else
            {
                cout << "\n Insufficient balance";
            }
        }
        else
        {
            cout << "\n Requested quantity is not available";
        }

        system("clear");
        if (purchased1 || purchased2)
        {
            cout << "\n\t\t\t *****Generated Bill*****";
            cout << "\n\t Name \t Quantity \t Price \t Total";
            if (purchased1)
                cout << "\n\t " << name1 << " \t " << purchasedQuantity1 << " \t\t " << price1 << " \t " << purchasedQuantity1 * price1;
            if (purchased2)
                cout << "\n\t " << name2 << " \t " << purchasedQuantity2 << " \t\t " << price2 << " \t " << purchasedQuantity2 * price2;
            cout << "\n\n\t\t\t\t\t Sub total: " << total;
            float gstApplied;

            if (total >= 100)
                gstApplied = total * (18.0 / 100);
            else
            {
                gstApplied = total * (5.0 / 100);
            }
            cout << "\n\t\t\t\t\t GST: " << gstApplied;
            cout << "\n\t\t\t\t\t Total: " << gstApplied + total;
        }
        else
        {
            cout << "\n\t\t\t ***** No items are purchased*****";
        }
    }
    else
    {
        cout << "\n\t\t *****Invalid credentials*****";
    }
    cout << endl;
}