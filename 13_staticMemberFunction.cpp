#include <iostream>

class MyClass {
private:
    static int count;

public:
    static void incrementCount() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int MyClass::count = 0;

int main() {
    MyClass::incrementCount();
    MyClass::incrementCount();
    MyClass::incrementCount();

    std::cout << "Count: " << MyClass::getCount() << std::endl;

    return 0;
}

// Output:
// Count: 3
