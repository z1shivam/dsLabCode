#include <iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "Constructor called" << endl;
        }
        A(int x)
        {
            cout << "Overloaded constructor called" << endl;
        }
        ~A()
        {
            cout << "Destructor called" << endl;
        }
};      

int main()
{
    A obj;
    A obj2(10);
    return 0;
}

// Output:
// Constructor called
// Overloaded constructor called
// Destructor called

