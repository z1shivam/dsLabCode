#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    string company;
    int roll;

    void introduce(){
        cout << name << endl;
        cout << company << endl;
        cout << roll << endl;
    }
};

int main(){
    Employee shivam;
    shivam.name = "shivam";
    shivam.company = "shivam";
    shivam.roll = 84;
    shivam.introduce();

return 0;
}
