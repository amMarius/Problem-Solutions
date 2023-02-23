#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	int p = 0;
	do {
		if (y % 2 != 0) {
			p = p + x;
		}
		y = y / 2;
		x *= 2;
	} while (y >= 1);
	cout << p;
}
