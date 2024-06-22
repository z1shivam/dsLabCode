#include <iostream>
using namespace std;

int main(){
    int start = 2, end = 100;
    for(int i = start, count = 0; count < 10; i++){
        int isPrime = 1;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            cout << i << " ";
            count++;
        }
    }
}