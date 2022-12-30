#include <iostream>
using namespace std;

int main() {
	int n, d;
	cin >> n;
	if (n < 0) {
		n = -n;
	}
	d = 1;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			d = i;
		}
	}
	cout << d;
}
