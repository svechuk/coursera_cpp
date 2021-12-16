#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (b == 0) {
		cout << "Imposibble" << endl;
	} else {
		cout << a / b << endl;
	}
	return 0;
}