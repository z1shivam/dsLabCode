#include <iostream>

class MyClass {
public:
    static int count; // static data member

    MyClass() {
        count++; // increment count each time an object is created
    }
};

int MyClass::count = 0; // initialize static data member

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    std::cout << "Number of objects created: " << MyClass::count << std::endl;

    return 0;
}

// Output:
// Number of objects created: 3
