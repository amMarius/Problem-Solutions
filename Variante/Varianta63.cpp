#include <iostream>
using namespace std;

int main() {
	int n, d, b = 0, v = 0, aux, a, x;
	cin >> n >> d;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		a = 0;
		aux = x;
		while (x % d == 0) {
			a++;
			x = x / d;
		}
		if (a > b) {
			b = a;
			v = aux;
		}
	}
	cout << v << " " << b;
}