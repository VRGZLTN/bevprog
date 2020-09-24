//this program converts miles to kilometres

#include "std_lib_facilities.h"

int main()
{
    double miles = 0;
    const double kmpermile = 1.609;

    cout << "Please enter the distance in miles that you want to convert to kilometres:" << endl;
    cin >> miles;

    cout << miles << " miles are " << miles * kmpermile << " kilometres." << endl;

    return 0;
}