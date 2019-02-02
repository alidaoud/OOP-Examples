#include <iostream>

using namespace std;


class coord {

private:
	int x, y;

public:

	coord(int i = 5, int j = 10) {
		x = i;
		y = j;
	}
	void show_xy() {

		cout << "x=" << x << " y= " << y << endl;
	}
	coord operator ++ () { //prefix
		x = x + 5;
		y = y + 10;
		return *this;
	}
	coord operator ++ (int a) { //posfix
		coord temp;
		temp.x = x;
		temp.y = y;
		x = x + 10;
		y = y + 20;
		return temp;
	}
};


int main() {


	{
		coord o1(3, 5), o2(1, 2), o3, o4, o5;
		++o1;
		o1.show_xy();
		o3 = ++o1;
		o1.show_xy();
		o3.show_xy();
		o1 = o4++;
		o1.show_xy();
		o4.show_xy();
		o5 = ++o4;
		o5.show_xy();
		o4.show_xy();
		o2++;
		o2.show_xy();

	}


	system("pause>null");
	return 0;
}

