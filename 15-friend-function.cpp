#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    friend void displayData(const MyClass& obj);
};

void displayData(const MyClass& obj) {
    std::cout << "Data: " << obj.data << std::endl;
}

int main() {
    MyClass obj(42);
    displayData(obj);
    return 0;
}

// Output:
// Data: 42

