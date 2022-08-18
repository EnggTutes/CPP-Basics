#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // 1. Integer:
    //  The keyword used for integer data types is int. Integers typically require 4 bytes of memory space and range from -2147483648 to 2147483647.
    // 2. Character:
    //  Character data type is used for storing characters. The keyword used for the character data type is char. Characters typically require 1 byte of memory space and range from -128 to 127 or 0 to 255.
    // 3. Boolean:
    //  Boolean data type is used for storing Boolean or logical values. A Boolean variable can store either true or false. The keyword used for the Boolean data type is bool.
    // 4. Floating Point:
    //  Floating Point data type is used for storing single-precision floating-point values or decimal values. The keyword used for the floating-point data type is float. Float variables typically require 4 bytes of memory space.
    // 5. Double Floating Point:
    //  Double Floating Point data type is used for storing double-precision floating-point values or decimal values. The keyword used for the double floating-point data type is double. Double variables typically require 8 bytes of memory space.

    // Data type modifiers available in C++ are:
    //     1. Signed
    //     2. Unsigned
    //     3. Short
    //     4. Long

    cout << "\n Size of short int\t\t\t\t" << sizeof(short int) << " byte";
    cout << "\t range = " << SHRT_MIN << " to " << SHRT_MAX;
    cout << "\n Size of unsigned short int\t\t\t" << sizeof(unsigned short int) << " byte";
    cout << "\t range = 0 to " << USHRT_MAX;

    cout << "\n Size of int\t\t\t\t\t" << sizeof(int) << " byte";
    cout << "\t range = " << INT_MIN << " to " << INT_MAX;
    cout << "\n Size of unsigned int\t\t\t\t" << sizeof(unsigned int) << " byte";
    cout << "\t range = 0 to " << UINT_MAX;

    cout << "\n Size of long int\t\t\t\t" << sizeof(long int) << " byte";
    cout << "\t range = " << LONG_MIN << " to " << LONG_MAX;
    cout << "\n Size of unsigned long int\t\t\t" << sizeof(unsigned long int) << " byte";
    cout << "\t range = 0 to " << ULONG_MAX;

    cout << "\n Size of long long int\t\t\t\t" << sizeof(long long int) << " byte";
    cout << "\t range = " << LLONG_MIN << " to " << LLONG_MAX;
    cout << "\n Size of unsigend long long int\t\t\t" << sizeof(unsigned long long int) << " byte";
    cout << "\t range = 0 to " << ULLONG_MAX;

    //----------------------------------------------------------------------------------------------------

    cout << "\n\n\n Size of float\t\t\t\t\t" << sizeof(float) << " byte";
    cout << "\n Size of double\t\t\t\t\t" << sizeof(double) << " byte";
    cout << "\n Size of long double\t\t\t\t" << sizeof(long double) << " byte";

    //----------------------------------------------------------------------------------------------------
    cout << "\n\n\n Size of char int\t\t\t\t" << sizeof(char) << " byte";
    cout << "\t range = " << CHAR_MIN << " to " << CHAR_MAX;
    cout << "\n Size of unsigned char int\t\t\t" << sizeof(unsigned char) << " byte";
    cout << "\t range = 0 to " << UCHAR_MAX;
}