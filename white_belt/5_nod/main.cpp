#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, x, d, ost;
	cin >> a >> b;

	if (a >= b) {
		x = a;
		d = b;
	} else {
		x = b;
		d = a;
	}

	ost = x % d;

	while (ost != 0) {
		x = d;
		d = ost;
		ost = x % d;
	}

	cout << d;
	return 0;
}