#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

//start
int factorial_dubey(int num)
{
    int fact=1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
    
}
//end
int main()
{
    int num = 5;

    int fact = 1;
    int a, b;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "factorial: " << fact <<endl; 

    cout << factorial(7) <<endl;

    cout << factorial_dubey(6);
    return 0;
}
