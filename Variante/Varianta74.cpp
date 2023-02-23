#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, p = 0;
	cin >> a >> b;
	while (a + b > 10) {
		if ((a % 10 == b % 10) && (a % 10 % 2 == 1)) {
			c = c * 10 + b % 10;
		}
		else {
			p = p * 10 + a % 10;
		}
		a = a / 10;
		b = b / 10;
	}
	cout << c << p;
}