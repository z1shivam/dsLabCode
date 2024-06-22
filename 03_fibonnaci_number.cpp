#include <iostream>
using namespace std;
int main(){
    for(int i=0, a=0, b=1; i<10; i++, b=a+b, a=b-a) cout << a << " ";
    return 0;
}