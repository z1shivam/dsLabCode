#include <iostream>
using namespace std;

void fibonacci(int terms){
        int term_1 = 0;
        int term_2 = 1;
        for(int i = 1; i<= terms; i++){
            cout << term_1 << " ";
            int next_term = term_1 + term_2;
            term_1 = term_2;
            term_2 = next_term;
        }
    }

int main(){
    fibonacci(5);
return 0;
}
