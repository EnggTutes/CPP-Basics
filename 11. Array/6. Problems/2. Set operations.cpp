#include <iostream>
using namespace std;
#include <iomanip>
#include <unistd.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

void uni(int arr1[], int n1, int arr2[], int n2, int unionArr1Arr2[], int &nUnionArr1Arr2)
{
    for (int i = 0; i < n1; i++)
    {
        unionArr1Arr2[nUnionArr1Arr2++] = arr1[i];
    }

    int i, j;
    for (j = 0; j < n2; j++)
    {
        for (i = 0; i < n1; i++)
        {
            if (arr2[j] == arr1[i])
            {
                break;
            }
        }
        if (i == n1)
        {
            unionArr1Arr2[nUnionArr1Arr2++] = arr2[j];
        }
    }
}

void intersection(int arr1[], int n1, int arr2[], int n2, int intersectionArr1Arr2[], int &nIntersectionArr1Arr2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                intersectionArr1Arr2[nIntersectionArr1Arr2++] = arr1[i];
                break;
            }
        }
    }
}

void asymetricDifference(int arr1[], int n1, int arr2[], int n2, int Arr1MinusArr2[], int &nArr1MinusArr2)
{
    int i, j;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                break;
            }
        }
        if (j == n2)
        {
            Arr1MinusArr2[nArr1MinusArr2++] = arr1[i];
        }
    }
}

int main()
{
    int nCpp, nJava;

    cout << "\n Enter number of students in CPP class: ";
    cin >> nCpp;
    int cpp[nCpp];

    cout << "\n Enter roll numbers of students in CPP class: ";
    for (int i = 0; i < nCpp; i++)
    {
        cout << "\n Enter roll number " << i + 1 << ": ";
        cin >> cpp[i];
    }

    cout << "\n =================================================================";

    cout << "\n Enter number of students in JAVA class: ";
    cin >> nJava;
    int java[nJava];

    cout << "\n Enter roll numbers of students in JAVA class: ";
    for (int i = 0; i < nJava; i++)
    {
        cout << "\n Enter roll number " << i + 1 << ": ";
        cin >> java[i];
    }

    int choice = 0;

    while (choice != 7)
    {
        system("clear");

        cout << "\n\t 1. Union";
        cout << "\n\t 2. Intersection";
        cout << "\n\t 3. CPP - JAVA";
        cout << "\n\t 4. JAVA - CPP";
        cout << "\n\t 5. Symmetrical difference";
        cout << "\n\t 6. Display CPP & JAVA";
        cout << "\n\t 7. Exit";

        cout << "\n Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int unionCppJava[nCpp + nJava], nunionCppJava = 0;
            uni(cpp, nCpp, java, nJava, unionCppJava, nunionCppJava);
            display(unionCppJava, nunionCppJava);
            break;
        }

        case 2:
        {
            int intersectionCppJava[nCpp + nJava], nIntersectionCppJava = 0;
            intersection(cpp, nCpp, java, nJava, intersectionCppJava, nIntersectionCppJava);
            display(intersectionCppJava, nIntersectionCppJava);
            break;
        }

        case 3:
        {
            int cppMinusJava[nCpp], nCppMinusJava = 0;
            asymetricDifference(cpp, nCpp, java, nJava, cppMinusJava, nCppMinusJava);
            display(cppMinusJava, nCppMinusJava);
            break;
        }

        case 4:
        {
            int javaMinusCpp[nJava], nJavaMinusCpp = 0;
            asymetricDifference(java, nJava, cpp, nCpp, javaMinusCpp, nJavaMinusCpp);
            display(javaMinusCpp, nJavaMinusCpp);
            break;
        }

        case 5:
        {
            int javaMinusCpp[nJava], nJavaMinusCpp = 0, cppMinusJava[nCpp], nCppMinusJava = 0;
            asymetricDifference(cpp, nCpp, java, nJava, cppMinusJava, nCppMinusJava);
            asymetricDifference(java, nJava, cpp, nCpp, javaMinusCpp, nJavaMinusCpp);

            int asymDiff[nCpp + nJava], nAsumDiff = 0;
            uni(cppMinusJava, nCppMinusJava, javaMinusCpp, nJavaMinusCpp, asymDiff, nAsumDiff);
            display(asymDiff, nAsumDiff);
            break;
        }

        case 6:
            cout << "\n Students in CPP class: ";
            display(cpp, nCpp);
            cout << "\n Students in JAVA class: ";
            display(java, nJava);
            break;

        case 7:
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