#include <iostream>
using namespace std;

int main() {
	int n, c, x, k = 9;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin>> x;
		c = x / 10 % 10;
		if (c < k) {
			k = c;
		}
	}
	cout << k;
}