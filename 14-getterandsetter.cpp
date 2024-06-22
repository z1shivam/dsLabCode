#include <iostream>
#include <string>
using namespace std;

class student{
    string name;
    int age;

    public:
    student(string studentname,int studentage);

    void setage(int inputage); //setter
    int getage (); //getter
};

student::student(string studentname, int studentage){
        studentname = name;
        studentage = age;
}

void student::setage(int inputage){
        age = inputage;
}
int student::getage(){
    return age;
}

int main(){
    
return 0;
}
