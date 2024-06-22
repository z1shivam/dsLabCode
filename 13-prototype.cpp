#include <iostream>
using namespace std;

class Student
{
public:
    Student(string name, int age); // declaration

    void displayInfo(); // only declaration

private:
    string studentName;
    int studentAge;
};

Student::Student(string name, int age)
{
    studentName = name;
    studentAge = age;
}

void Student::displayInfo()
{
    cout << "Name: " << studentName << endl;
    cout << "Age: " << studentAge << " years" << endl;
}

int main()
{
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    student1.displayInfo();
    student2.displayInfo();

    return 0;
}
