#include <iostream>
using namespace std;

int main() {
	int x, z = 0, p = 1, c;
	cin >> x;
	do {
		c = x % 10;
		if (c % 2 != 0) {
			z += c * p;
			p *= 10;
		}
		x = x / 10;
	} while (x != 0);
	cout << z;
}