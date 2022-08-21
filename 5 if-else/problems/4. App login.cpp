#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    string username = "abcd", password = "Abcd@1234";
    string userEnteredUsername, userEnteredPassword;

    cout << "\n Enter username: ";
    cin >> username;
    cout << "\n Enter password:";
    userEnteredPassword = getpass("\n Enter password: ");

    if (userEnteredUsername == username && userEnteredPassword == password)
        cout << "\n Login successfull";
    else
        cout << "\n Invalid credentials";
}