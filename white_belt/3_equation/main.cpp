#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	double d;
	double x1, x2;

	cin >> a >> b >> c;

	if ((a == 0 || b == 0) && c == 0) {
		x1 = 0;
		cout << x1 << endl;
	}
	else if (b == 0) {
		if (c / a < 0) {
			x1 = sqrt(-c / a);
			x2 = -x1;
			cout << x1 << " " << x2 << endl;
		}
	}
	else if (c == 0) {
		x1 = 0;
		x2 = -b / a;
		cout << x1 << " " << x2 << endl;
	}
	else if (a == 0) {
		x1 = -c / b;
		cout << x1 << endl;
	}
	else {
		d = b * b - 4 * a * c;

		if (d > 0) {
			x1 = (-b - sqrt(d)) / 2 / a;
			x2 = (-b + sqrt(d)) / 2 / a;
			cout << x1 << " " << x2 << endl;
		}
		else if (d == 0) {
			x1 = -b / 2 / a;
			cout << x1 << endl;
		}
	}

	return 0;
}