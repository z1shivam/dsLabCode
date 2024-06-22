#include <iostream>
using namespace std;

void binarycon(int n)
{
    if (n == 0)
        return;
    binarycon(n / 2);
    cout << n % 2;
}

int main()
{
    int n = 5;
    binarycon(n);
    return 0;
}
