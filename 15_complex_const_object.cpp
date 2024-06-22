#include <iostream>

class Complex {
private:
    const double real;
    const double imaginary;

public:
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    void display() const {
        std::cout << "Complex number: " << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    const Complex c(3.5, 2.7);
    c.display();

    return 0;
}

// Output:
// Complex number: 3.5 + 2.7i
