#include <iostream>
using namespace std;

class shape{
	public:
		void area(){
			cout << "Area is equal to 0";
		}
		int area(int l){
			cout << "Area:";
			return l;
		}
		int area(int l, int b){
			cout << "Area of the rectangle:";
			return (l*b);
		}
};

int main(){
	int l = 8;
	int b = 6;
	int area;
	
	shape line;
	
	int a = line.area(l);
	cout << a;
	return 0;
}