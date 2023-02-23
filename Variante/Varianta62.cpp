#include <iostream>
using namespace std;

int main() {
	int x, aux, c, t;
	cin >> x; aux = x;
	do {
		c = x % 10;
		x = x / 10;
		t = x;
		if (c == 0) {
			aux = x;
		}
		while (t != 0) {
			c = c * 10;
			t = t / 10;
		}
		x = c + x;
		cout << x << endl;
	} while (x != aux || c == 0);
}