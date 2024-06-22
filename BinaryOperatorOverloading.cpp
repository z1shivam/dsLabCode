#include <iostream>
using namespace std;

class complex{
	private:
	int real, imag;
	
	public:
	complex (int x = 0, int y = 0){
	real = x;
	imag = y;
	}
	
	void show(){
		cout << real << " + " << imag << "i" << endl;
	}
	
	complex operator+(complex const& obj){
		complex c;
		c.real = real + obj.real;
		c.imag = imag + obj.imag;
		return c;
	}
};

int main(){
	complex c1(4,7), c2(9,4);
	complex c3 = c1+c2;
	c3.show();
	c1.show();
	c2.show();
}