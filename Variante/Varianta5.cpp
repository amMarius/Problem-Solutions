#include <iostream>
using namespace std;

int main() {
	int x, z, y = 0;
	cin >> x >> z;
	do {
		y = y * 10 + x % 10;
		x = x / 100;
	} while (x != 0);
	while (y * z > 0 && y % 10 == z % 10) {
		y = y / 10;
		z = z / 10;
	}
	if (z + y == 0) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}