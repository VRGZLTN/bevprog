 #include "std_lib_facilities.h"

 int main()
 {
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";   

    string first_name = "";
    cin >> first_name;

    cout << "Dear " << first_name << ",\n"
        << "    How are you? I am fine. I hope you are doing well.\n"
        << "I have just finished the book you sent me last month. It was amazing.\n";

    cout << "Please enter the name of another friend:\n";

    string friend_name = "";
    cin >> friend_name;

    cout << "Have you seen " << friend_name << " lately?\n";

    cout << "Please enter an 'm' if this friend is a male or an 'f' if she is female:\n";

    char friend_sex = '0';
    cin >> friend_sex;

    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";

    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";

    cout << "Please enter the age of the recipient:\n";

    int age = 0;
    cin >> age;

    if (age <= 0 || age >= 110)
        simple_error("you're kidding!");

    cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age < 12)
        cout << "Next year you will be " << age + 1 << endl;
    
    if (age == 17)
        cout << "Next year you will be able to vote."  << endl;

    if (age > 70)
        cout << "I hope you are enjoying retirement." << endl;

    cout << "We should meet sometime soon" << endl << "Yours sincerely\n\n" << "Zoli\n";


    return 0;
 }