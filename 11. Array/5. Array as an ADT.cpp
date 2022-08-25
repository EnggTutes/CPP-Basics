#include <iostream>
using namespace std;
#include <iomanip>
#include <unistd.h>

const int MAX = 100;

bool add(int arr[], int rollno, int &n)
{
    if (n == MAX)
        return false;

    arr[n++] = rollno;
    return true;
}

int find(int arr[], int rollno, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == rollno)
        {
            return i;
        }
    }
    return -1;
}

void update(int arr[], int index, int newRollno)
{
    arr[index] = newRollno;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int students[MAX], choice = 0, nStudents = 0;

    while (choice != 5)
    {
        system("clear");

        cout << "\n\t 1. Add a student";
        cout << "\n\t 2. Find a student";
        cout << "\n\t 3. Update a student";
        cout << "\n\t 4. Display students";
        cout << "\n\t 5. Exit";
        cout << "\n Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int rollno;
            cout << "\n Enter the roll number of student: ";
            cin >> rollno;
            if (add(students, rollno, nStudents))
            {
                cout << "\n Student inserted Succesfully";
            }
            else
            {
                cout << "\n Cant admit new Student, Admission is full!!";
            }
            break;
        }

        case 2:
        {
            int rollno;
            cout << "\n Enter the roll number of student: ";
            cin >> rollno;

            int index = find(students, rollno, nStudents);

            if (index != -1)
            {
                cout << "\n Roll number " << rollno << " is found at index " << index;
                break;
            }
            cout << "\n Roll number " << rollno << " is not present in the array!!";
            break;
        }

        case 3:
        {
            int rollno;
            cout << "\n Enter the roll number of student: ";
            cin >> rollno;

            int index = find(students, rollno, nStudents);

            if (index != -1)
            {
                int newRollno;
                cout << "\n Enter new roll number: ";
                cin >> newRollno;

                update(students, index, newRollno);

                cout << "\n Roll number " << rollno << " is succesfully update to " << newRollno;
                break;
            }

            cout << "\n Roll number " << rollno << " is not present in the array!!";
            break;
        }

        case 4:
        {
            cout << "\n Roll number of students are: ";
            display(students, nStudents);
            break;
        }

        case 5:
            cout << "\n\t Thanks for using our software!!!";
            break;

        default:
            cout << "\n\t INVALID CHOICE";
            break;
        }
        cout << "\n\n"
             << setw(120) << "Press any key to continue...";
        getpass("");
    }
}