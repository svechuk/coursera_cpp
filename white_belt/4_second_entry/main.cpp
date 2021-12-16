#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;
	cin >> str;

	for (int i = 0; i < str.size(); ++i) {
		if (count == 2) {
			cout << i - 1;
			break;
		}
		if (str[i] == 'f') {
			++count;
		}
	}

	if (count == 0) {
		cout << "-2";
	} else if (count == 1) {
		cout << "-1";
	}

	return 0;
}