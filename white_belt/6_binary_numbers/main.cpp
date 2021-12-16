#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> x;
	cin >> n;

	while (n != 1) {
		x.push_back(n % 2);
		n /= 2;
	}
	x.push_back(1);

	for (int i = x.size() - 1; i >= 0 ; --i) {
		cout << x[i];
	}
	return 0;
}