#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;

int main()
{
    string username1, password1, message1 = "";
    string username2, password2, message2 = "";
    int choiceMainMenu = 0, nUsers = 0;

    while (choiceMainMenu != 3)
    {
        system("clear");

        cout << "\n\t 1. Regisration";
        cout << "\n\t 2. Login";
        cout << "\n\t 3. Exit";
        cout << "\n Enter your choice: ";
        cin >> choiceMainMenu;

        switch (choiceMainMenu)
        {
        case 1:
        {
            string userEnteredUsername, userEnteredPassword;
            if (nUsers != 2)
            {
                cout << "\n Enter username: ";
                cin >> userEnteredUsername;
                cout << "\n Enter password: ";
                userEnteredPassword = getpass("");
                if (nUsers == 0)
                {
                    username1 = userEnteredUsername;
                    password1 = userEnteredPassword;
                    nUsers++;
                }
                else
                {
                    username2 = userEnteredUsername;
                    password2 = userEnteredPassword;
                    nUsers++;
                }
                cout << "\n\t\t ***Registration is successfull!!!. Please login";
            }
            else
                cout << "\n Registration os closed!!";
            break;
        }
        case 2:
        {
            string userEnteredUsername, userEnteredPassword;
            cout << "\n Enter username: ";
            cin >> userEnteredUsername;
            cout << "\n Enter password: ";
            userEnteredPassword = getpass("");

            int loginId = 0;

            if (username1 == userEnteredUsername && password1 == userEnteredPassword)
            {
                loginId = 1;
            }
            else if (username2 == userEnteredUsername && password2 == userEnteredPassword)
            {
                loginId = 2;
            }
            else
                cout << "\n\t ***Invalid credentials***";

            if (loginId != 0)
            {
                int choiceSubMenu = 0;
                while (choiceSubMenu != 3)
                {
                    system("clear");
                    cout << "\n\t 1. Send a message";
                    cout << "\n\t 2. Read a message";
                    cout << "\n\t 3. Logout";
                    cout << "\n Enter your choice: ";
                    cin >> choiceSubMenu;

                    switch (choiceSubMenu)
                    {
                    case 1:
                    {
                        string message = "";
                        cout << "\n\t Enter a message: ";
                        cin >> message;

                        if (loginId == 1)
                        {
                            message2 = message;
                        }
                        else
                        {
                            message1 = message;
                        }
                    }

                    break;

                    case 2:
                        if (loginId == 1)
                        {
                            if (message1 != "")
                            {
                                cout << "\n\t Message: " << message1;
                                cout << "\n\t Sent by: " << username2;
                            }
                            else
                                cout << "\n\t No message in Inbox";
                        }
                        else
                        {
                            if (message2 != "")
                            {
                                cout << "\n\t Message: " << message2;
                                cout << "\n\t Sent by: " << username1;
                            }
                            else
                                cout << "\n\t No message in Inbox";
                        }
                        break;
                    case 3:
                        cout << "\n\t Logout Successfull!!!";
                        break;
                    default:
                        cout << "\n Invalid option";
                        break;
                    }
                    cout << "\n\n"
                         << setw(120) << "Press any key to continue...";
                    getpass("");
                }
            }

            break;
        }

        default:
            cout << "\n Invalid option";
            break;
        }
        cout << "\n\n"
             << setw(120) << "Press any key to continue...";
        getpass("");
    }
}