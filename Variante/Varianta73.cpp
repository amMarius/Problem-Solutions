#include <iostream>
using namespace std;

int main() {
	int a, x, b, p, nr = 0;
	cin >> a >> b >> p;
	for (int i = a; i <= b; i++) {
		x = i;
		while (x != 0 && x % p != 0) {
			x = x / 10;
		}
		if (x != 0) {
			nr++;
		}
	}
	cout << nr;
}