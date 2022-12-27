#include <iostream>
using namespace std;

int main() {
	int n, k, nr = 0, p = 1;
	cin >> n >> k;
	while (n != 0 && k != 0) {
		if (n % 2 != 0) {
			nr = nr + n % 10 * p;
			p = p * 10;
		}
		else {
			k = k - 1;
		}
		n = n / 10;
	}
	cout << nr;
}