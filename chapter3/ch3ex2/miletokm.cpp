//this program converts miles to kilometres

#include "std_lib_facilities.h"

int main()
{
    double miles = 0;

    cout << "Please enter the distance in miles that you want to convert to kilometres:" << endl;
    cin >> miles;

    cout << miles << " miles are " << miles * 1.609 << " kilometres." << endl;

    return 0;
}