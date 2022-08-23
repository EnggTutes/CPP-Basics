#include <iostream>
using namespace std;

int main()
{
    float cgpa;

    cout << "\n Enter your CGPA: ";
    cin >> cgpa;

    if (cgpa >= 6.5)
    {
        int aptitude_score;
        cout << "\n Enter your Aptitude score: ";
        cin >> aptitude_score;

        if (aptitude_score >= 75)
        {
            int technical_score;
            cout << "\n Enter your Technical score: ";
            cin >> technical_score;

            if (technical_score >= 60)
            {
                int hr_score;
                cout << "\n Enter your Technical score: ";
                cin >> hr_score;

                if (hr_score >= 60)
                {
                    cout << "\n Congratulations you are hired!!!";
                }
                else
                {
                    cout << "\n Better luck next time!!";
                }
            }
            else
            {
                cout << "\n You are not eligible for HR round";
            }
        }
        else
        {
            cout << "\n You are not eligible for technical round";
        }
    }
    else
    {
        cout << "\n You are not eligible for placement process";
    }
}