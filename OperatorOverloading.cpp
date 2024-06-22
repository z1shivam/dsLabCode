#include <iostream>
using namespace std;

class demo{
	int a, b;
	public:
		demo(int x, int y){
			a = x;
			b = y;
		}
		
		void show(){
			cout << "x :" << a << " & " << "y :" << b;
		}
		
		// Operator Overloading Here
		void operator -(){
			a = -a;
			b = -b;
		}
		
		void operator +(){
			a = 0;
			b = 0;
		}
};

int main(){
	demo first(3,4);
	first.show();
	-first;
	first.show();
	+first;
	first.show();
}