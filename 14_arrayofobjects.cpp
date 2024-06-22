#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    MyClass() {
        value = 0;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    const int SIZE = 5;
    MyClass objects[SIZE];

    // Assign values to objects
    for (int i = 0; i < SIZE; i++) {
        objects[i].value = i + 1;
    }

    // Display values of objects
    for (int i = 0; i < SIZE; i++) {
        objects[i].display();
    }

    return 0;
}

// Output:
// Value: 1
// Value: 2
// Value: 3
// Value: 4
// Value: 5

