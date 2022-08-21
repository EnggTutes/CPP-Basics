#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "\n"
         << setw(15) << "name" << setw(10) << "Marks 1" << setw(10) << "Marks 2" << setw(10) << "Total" << setw(15) << "Percentage";
    cout << "\n"
         << setw(15) << "Prathamesh" << setw(10) << "80" << setw(10) << "80" << setw(10) << "160" << setw(15) << "80.0";
    cout << "\n"
         << setw(15) << "Tulsidas" << setw(10) << "70" << setw(10) << "70" << setw(10) << "140" << setw(15) << "70.0";

    return 0;
}