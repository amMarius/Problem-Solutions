#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, k, nr = 0, p = 1, c;
	cin >> n >> k;
	while (n != 0) {
		c = n % 10;
		nr = nr + c * p;
		p *= 10;
		if (c == k) {
			nr = nr + c * p;
			p *= 10;
		}
		n = n / 10;
	}
	n = nr;
	cout << n;
}
