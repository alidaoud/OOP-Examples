#include <iostream>

using namespace std;


struct v1 {
	double x, y, z;

	void set(double a, double b, double c) {

		x = a;
		y = b;
		z = c;
	};
	void show() {

		cout << "X= " << x << " Y= " << y << " Z= " << z << endl;
	};
	v1(double a, double b, double c) {

		x = a;
		y = b;
		z = c;
	};
	v1() {

		x = 3;
		y = 5;
		z = 7;
	};
};
template <class X> void swapargs(X &a, X &b) {

	X temp;
	temp = a;
	a = b;
	b = temp;
}

void swapargs(double &a, double &b) {

	cout << "this is inside swapargs(double, double)" << endl;

}


int main() {


	v1 xx(1, 3, 5), yy(2, 4, 6), a;
	int x, y;
	double c, d;

	x = 8;
	y = 10;
	c = 12;
	d = 14;

	cout << "Original x = " << x << ", y=" << y << endl;
	swapargs(x, y);
	cout << "swapped x = " << x << ", y=" << y << endl;

	cout << "Original c = " << c << ", d=" << d << endl;
	swapargs(c, d);
	cout << "swapped c = " << c << ", d=" << d << endl;

	xx.set(5, 10, 15);

	cout << "Original xx: "; xx.show();
	cout << "Original yy: "; yy.show();

	swapargs(xx, yy);

	cout << "swapped xx: "; xx.show();
	cout << "swapped yy: "; yy.show();



	system("pause>null");
	return 0;
}
