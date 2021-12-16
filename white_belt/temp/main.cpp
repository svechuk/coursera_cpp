#include <iostream>
using namespace std;

int main() {
	double a, b, x, y, n, final;
	cin >> n >> a >> b >> x >> y;

	if (n > b) {
		final = n * (1 - y / 100);
	}
	else if (n > a) {
		final = n * (1 - x / 100);
	}
	else {
		final = n;
	}

	cout << final << endl;
	return 0;
}