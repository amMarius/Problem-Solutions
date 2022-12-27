#include <iostream>
using namespace std;

int main() {
	int n, k, c, p = 1;
	cin >> n >> k;
	while (n > 0 && k > 0) {
		c = n % 10;
		if (c % 2 == 1) {
			p = p * c;
		}
		n = n / 10;
		k = k - 1;
	}
	cout << p;
}