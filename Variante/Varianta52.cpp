#include <iostream>
using namespace std;

int main() {
	int n, c = 0, d = 0, x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		while (x % 2 == 0) {
			x = x / 2; d++;
		}
		while (x % 5 == 0) {
			x = x / 5; c++;
		}
	}
	if (c < d) {
		cout << c;
	}
	else {
		cout << d;
	}
}