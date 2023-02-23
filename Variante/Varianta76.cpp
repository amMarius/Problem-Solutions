#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, x = 2, p = 1, c = 0;
	cin >> a;
	while (a > 1) {
		c = 0;
		while (a % x == 0) {
			c = x;
			a = a / x;
		}
		if (c != 0) {
			p = p * c;
		}
		x++;
	}
	cout << p;
}
