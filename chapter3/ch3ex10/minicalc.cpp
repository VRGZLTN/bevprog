//This program takes an operator followed by two operands and outputs the result

#include "std_lib_facilities.h"

int main()
{
    string operation = "";
    double num1 = 0;
    double num2 = 0;

    cout << "Please enter the operation you want to do, followed by the two operands, all separated with spaces:" << endl;

    cin >> operation >> num1 >> num2;

    if (operation == "+" || operation == "plus") 
        cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;

    if (operation == "-" || operation == "minus")
    cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;

    if (operation == "*" || operation == "mul")
        cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;

    if (operation == "/" || operation == "div")
        cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;

    return 0;
}