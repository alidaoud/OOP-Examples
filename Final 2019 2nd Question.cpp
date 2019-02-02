#include <iostream>

using namespace std;


class coord {

private:
	int x, y;

public:
	coord(int i = 1, int j = 5) {
		x = i;
		y = j;
	}
	void show_xy() {

		cout << "x=" << x << " y= " << y << endl;
	}

	coord operator +(coord ob2) {
		coord temp;
		temp.x = x + ob2.x;
		temp.y = y + ob2.y;
		return temp;
	}
	coord operator *(coord ob2) {

		coord temp;
		temp.x = x * ob2.x;
		temp.y = y * ob2.y;
		return temp;
	}

};

int main() {


	{
		coord o1(2, 6), o2(3, 7), o3, o4, o5;
		o3.show_xy();
		o3 = o1 + o2;
		o3.show_xy();
		o4.show_xy();
		o4 = o1 + o2 + o5;
		o4.show_xy();
		o1.show_xy();
		o1 = o1 * o2;
		o1.show_xy();
		o3 = o1.operator+(o2);
		o3.show_xy();
	}


	system("pause>null");
	return 0;
}


