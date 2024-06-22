#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello, Shivam!"; // Initialization with a string literal
    std::string str2(str1); // Copy constructor
    std::string str3 = str1 + " How are you?"; // Concatenation

    // Output
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str3: " << str3 << std::endl;

    return 0;
}
