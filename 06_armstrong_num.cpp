#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number to check if it is an Armstrong number: ";
    int n, sum = 0, temp;
    cin >> n;
    for (temp = n; temp > 0; temp /= 10)
        sum += (temp % 10) * (temp % 10) * (temp % 10);
    if (sum == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";
    return 0;
}