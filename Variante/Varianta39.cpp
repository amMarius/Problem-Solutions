#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, nr = 0, p = 1, c;
	cin >> n;
	while (n != 0) {
		c = n % 10;
		if (c < 9) {
			c += 1;
		}
		nr = nr + c * p;
		p *= 10;
		n = n / 10;
	}
	n = nr;
	cout << n;
}
