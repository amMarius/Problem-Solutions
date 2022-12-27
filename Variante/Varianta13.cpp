#include <iostream>
using namespace std;

int main() {
	int c, n, a, b, k = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		n = i;
		c = 0;
		while (n > 0) {
			if (n % 2 == 1){
				c = c + 1;
			}
			n = n / 10;
		}
		if (c > 0) {
			k = k + 1;
		}
	}
	cout << k;
}