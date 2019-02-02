#include <iostream>

using namespace std;

class myclass {
public:

	double x, y;

	myclass(double a, double b) {
		x = a;
		y = b;
		cout << " Constructing object. x=" << x << " y=" << y << endl;
	}
	myclass(const myclass &xx) {
		x = xx.x;
		y = xx.y;
		cout << "using Copy Consuuctor. x=" << x << " y =" << y << endl;
	}
	~myclass() {
		cout << "Destroying object. x=" << x << "y = " << y << endl;
	}

	void show() {
		cout << "x=" << x << "y= " << y << endl;
	}

};


void fun1(myclass ob1) {

	myclass ob(5, 10);
	ob.x = ob.x + ob1.x;
	ob.y = ob.y + ob1.y;
	cout << "x= " << ob.x << " y = " << ob.y << endl;
}


myclass fun2() {

	myclass ob(10, 20);
	return ob;
};

int main() {

	
	{
		myclass ob1(5, 10), ob2(3, 5);
		ob1.show();
		ob1 = fun2();
		ob1.show();
		ob2 = fun2();
	}
	

	system("pause>null");
	return 0;
}
