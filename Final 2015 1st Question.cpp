#include <iostream>

using namespace std;

class MyClass
{
public:

	double x, y, z;

	MyClass() { cout << " Empty Const " << endl; }

	MyClass(double a, double b, double c)
	{
		x = a; y = b; z = c;
		cout << "Constructing object. x=" << x << " y=" << y << " z=" << z << endl;
	}

	MyClass(const MyClass &xx)
	{
		x = xx.x; y = xx.y; z = xx.z;
		cout << "Using Copy Constructor x=" << x << " y=" << y << " z=" << z << endl;
	}
	~MyClass() { cout << "Destructing object. x=" << x << " y=" << y << " z=" << z << endl; }

	void show_ab() { cout << "value of x=" << x << "value of y=" << y << "value of z=" << z << endl; }
};

MyClass fun1(MyClass ob1)
{
	MyClass ob2(1, 2, 3);
	ob2.x = ob2.x + ob1.x;
	ob2.y = ob2.y + ob1.y;
	ob2.z = ob2.z + ob1.z;
	return ob2;
}

int main() {


	{
		MyClass ob1(5, 10, 15), ob2(20, 30, 40);
		ob2.show_ab();
		ob2 = fun1(ob1);
		ob2.show_ab();
		ob1 = fun1(ob2);
		ob2.show_ab();
	}

	system("pause>null");
	return 0;
}

