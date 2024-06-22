#include <iostream>
using namespace std;
int main()
{
    for (int i = 2, count = 0; count < 10; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " ";
            count++;
        }
    }
    return 0;
}