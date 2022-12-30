#include <iostream>
using namespace std;

int main() {
	int a, b, p = 0;
	cin >> a >> b;
	while (a != b) {
		p = p + 1;
		if (a < b) {
			a = a + 2;
		}
		else {
			b = b + 3;
		}
	}

	cout << p;
}
