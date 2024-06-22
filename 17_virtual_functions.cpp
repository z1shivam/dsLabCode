#include <iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout << "display base" << endl;
    }
    virtual void show(){
        cout << "show base" << endl;
    }
};

class Derived: public Base{
    public:
    void display(){
        cout << "display derived" << endl;
    }
};

int main(){
    Base B;
    Derived D;

    Base *bptr;
    cout << "bptr points to base" << endl;
    bptr = &B;
    bptr -> display();
    bptr -> show();
    cout << "bptr points to derived" << endl;
    bptr =&D;
    bptr -> display();
    bptr -> show();
    return 0;
}