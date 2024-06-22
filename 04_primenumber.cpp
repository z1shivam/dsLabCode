#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// what to expect
void printPrimes(int low, int high) {
    cout << "Prime numbers between " << low << " and " << high << " are: " << endl;
    for (int i = low; i <= high; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int low, high;
    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;
    printPrimes(low, high);
    return 0;
}
