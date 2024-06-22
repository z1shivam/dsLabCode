#include <iostream>
using namespace std;

int main()
{
    int user_in;
    cout << "Choose from the follwing: \n1. Add\n2. subs";
    cin >> user_in;

    int num1;
    cout << "Enter 1st num:";
    cin >> num1;

    int num2;
    cout << "Enter 2nd number: ";
    cin >> num2;

    int result;

    switch (user_in)
    {
    case 1:
        result = num1 + num2;
        break;

    case 2:
        result = num1 - num2;
        break;
    default:
        cout << "invalid";
        break;
    }
    cout << result;
    return 0;
}
