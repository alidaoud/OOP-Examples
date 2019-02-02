#include <iostream>

using namespace std;


class base1 {

protected:
	double x, y;

public:

	base1(double a, double b) {
		x = a;
		y = b;
	}
	virtual void f1() {
		cout << "Base1 function f1 \n";
		cout << "Value of f1(x, y): " << (x + y) << endl;
	}
};

class derived1 :public base1 {
protected:
	double z;

public:

	derived1(double a, double b, double c) :base1(a, b) {
		z = c;
	}
	void f1() {
		cout << "Derived1 function f1 : \n";
		cout << "Value of f1(x, y, z) : " << 3 * (x + y - z) << endl;
	}

};

class derived2 :public base1 {

protected:
	double t;

public:

	derived2(double a, double b, double c) :base1(a, b) {
		t = c;
	}

};



int main() {


	{
		base1 *p, ob_b1(2, 4);
		derived1 ob_d1(5, 5, 10), ob_d2(1, 5, 3);
		derived2 ob_d3(50, 40, 30);

		p = &ob_d1;
		p->f1();

		p = &ob_b1;
		p->f1();

		p = &ob_d2;
		p->f1();

		p = &ob_d3;
		p->f1();
	
	}


	system("pause>null");
	return 0;
}
