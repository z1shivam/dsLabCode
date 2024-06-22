#include <iostream>
using namespace std;

int main(){
    int p, r, t;
    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;
    cout << "Simple interest: " << p * r * t / 100.0 << endl;
    return 0;
}