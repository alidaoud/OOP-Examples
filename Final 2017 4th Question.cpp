#include <iostream>

using namespace std;

class base1 {

public:
	double x;

	base1(double a) {
		x = a;
		cout << "constructing base1  " << 2 * x << endl;
	}
	~base1() {
		cout << "Destructing base 1  " << x << endl;
	}

};

class base2 {

public:

	double y;
public:

	base2(double a) {
		y = a;
		cout << "constructing base2  " << 3 * y << endl;
	}
	~base2() {
		cout << "Destructing base 2  " << y << endl;
	}
};

class derived1 :public base1, public base2 {

public:
	double z;
	derived1(double a, double b, double c) :base1(a), base2(b) {

		z = c;
		cout << "constructing derived 1  " << 4 * z << endl;
	}
	~derived1() {

		cout << "destructing derived 1  " << z << endl;
	}
};

int main() {


	{
		derived1 ob1(10, 20, 30);
		base2 ob2(5);
		base1 ob3(40);
	}
	

	system("pause>null");
	return 0;
}
