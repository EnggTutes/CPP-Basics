#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;

void printMainMenu()
{
    system("clear");

    cout << "\n\t 1. Regisration";
    cout << "\n\t 2. Login";
    cout << "\n\t 3. Exit";
}

void printSubMenu()
{
    system("clear");
    cout << "\n\t 1. Send a message";
    cout << "\n\t 2. Read a message";
    cout << "\n\t 3. Logout";
}

bool isRegistrationAvailable(int nUsers)
{
    if (nUsers != 2)
        return true;
    return false;
}

void askUsernamePassword(string &userEnteredUsername, string &userEnteredPassword)
{
    cout << "\n Enter username: ";
    cin >> userEnteredUsername;
    cout << "\n Enter password: ";
    userEnteredPassword = getpass("");
}

void registerUser(string &username, string &password, string &userEnteredUsername, string &userEnteredPassword, int &nUsers)
{
    username = userEnteredUsername;
    password = userEnteredPassword;
    nUsers++;
}

bool login(string &username, string &password, string &userEnteredUsername, string &userEnteredPassword)
{
    if (username == userEnteredUsername && password == userEnteredPassword)
    {
        return true;
    }
    return false;
}

void readMessage(string &message, string &username)
{
    if (message != "")
    {
        cout << "\n\t Message: " << message;
        cout << "\n\t Sent by: " << username;
    }
    else
        cout << "\n\t No message in Inbox";
}

void pressAnyKey()
{
    cout << "\n\n"
         << setw(120) << "Press any key to continue...";
    getpass("");
}

int main()
{
    string username1, password1, message1 = "";
    string username2, password2, message2 = "";
    int choiceMainMenu = 0, nUsers = 0;

    printMainMenu();

    while (choiceMainMenu != 3)
    {
        printMainMenu();
        cout << "\n Enter your choice: ";
        cin >> choiceMainMenu;

        switch (choiceMainMenu)
        {
        case 1:
        {
            string userEnteredUsername, userEnteredPassword;
            if (isRegistrationAvailable(nUsers))
            {
                askUsernamePassword(userEnteredUsername, userEnteredPassword);
                if (nUsers == 0)
                {
                    registerUser(username1, password1, userEnteredUsername, userEnteredPassword, nUsers);
                }
                else
                {
                    registerUser(username2, password2, userEnteredUsername, userEnteredPassword, nUsers);
                }
                cout << "\n\t\t ***Registration is successfull!!!. Please login";
            }
            else
                cout << "\n Registration iss closed!!";
            break;
        }
        case 2:
        {
            string userEnteredUsername, userEnteredPassword;
            askUsernamePassword(userEnteredUsername, userEnteredPassword);

            int loginId = 0;
            if (login(username1, password1, userEnteredUsername, userEnteredPassword))
            {
                loginId = 1;
            }
            else if (login(username2, password2, userEnteredUsername, userEnteredPassword))
            {
                loginId = 2;
            }
            else
            {
                cout << "\n\t ***Invalid credentials***";
                break;
            }

            int choiceSubMenu = 0;
            while (choiceSubMenu != 3)
            {
                printSubMenu();
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
                        readMessage(message1, username2);
                    }
                    else
                    {
                        readMessage(message1, username2);
                    }
                    break;
                case 3:
                    cout << "\n\t Logout Successfull!!!";
                    break;
                default:
                    cout << "\n Invalid option";
                    break;
                }
                pressAnyKey();
            }
            break;
        }

        case 3:
            cout << "\n Thanks for using our software!!!";
            break;

        default:
            cout << "\n Invalid option";
            break;
        }
        pressAnyKey();
    }
}