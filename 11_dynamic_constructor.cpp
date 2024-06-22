#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car() {
        brand = "Unknown";
        year = 0;
    }

    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    string brand;
    int year;

    cout << "Enter the brand of the car: ";
    cin >> brand;

    cout << "Enter the year of the car: ";
    cin >> year;

    Car* carPtr = new Car(brand, year);
    carPtr->display();

    delete carPtr;

    return 0;
}

// Output:
// Enter the brand of the car: BMW
// Enter the year of the car: 2019
// Brand: BMW
// Year: 2019