#include <iostream>
using namespace std;

int main() {
	int n, k, p = 1;
	int nr = 0;
	cin >> n >> k;
	while (n != 0 && k != 0) {
		if (n % 2 == 0) {
			nr = nr + n % 10 * p;
			p = p * 10;
		}
		else {
			k -= 1;
		}
		n = n / 10;
	}
	cout << nr;
}