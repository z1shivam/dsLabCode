#include <iostream>
using namespace std;

int m = 5; //global scoped

int main(){
    int n = 7; //local scoped
    int m = 9;
    //scope resolution operator ::
    cout << n << endl; //output: 7
    cout << m << endl; // output: 9
    cout << ::m <<endl; //output: 5

    //learning: we use :: to access the global version of the data.
    // if the local version is not defined then we can access global version without ::
return 0;
}
