#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;

int main()
{
    int choice = 0;

    while (choice != 5)
    {
        system("clear");

        cout << "\n\t 1. Choice 1";
        cout << "\n\t 2. Choice 2";
        cout << "\n\t 3. Choice 3";
        cout << "\n\t 4. Choice 4";
        cout << "\n\t 5. Exit";

        cout << "\n Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n\t Choice 1";
            break;
        case 2:
            cout << "\n\t Choice 2";
            break;
        case 3:
            cout << "\n\t Choice 3";
            break;
        case 4:
            cout << "\n\t Choice 4";
            break;
        case 5:
            cout << "\n\t Thank you for using our software";
            break;
        default:
            cout << "\n Invalid option";
        }

        cout << "\n\n"
             << setw(120) << "Press any key to continue...";
        getpass("");
    }
}