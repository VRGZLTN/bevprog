//This program tests if a number is even or odd

#include "std_lib_facilities.h"

int main()
{
    int testnum = 0;

    cout << "Please enter an integer to determine if it is an even or odd number: " << endl;

    cin >> testnum;

    if (testnum % 2 == 0)
        cout << testnum << " is an even number." << endl;
    else
        cout << testnum << " is an odd number" << endl;

    return 0;
}