#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x, s = 0, f = 2, p;
	cin >> x;
	while (x > 1) {
		p = 0;
		while (x % f) {
			x = x / f;
			p += 1;
		}
		if (p != 0) {
			s += p;
		}
		f = f + 1;
	}
	cout << s;
}
