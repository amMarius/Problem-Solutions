#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> n;
	int nr = 0;
	for (int a = 9; a >= 0; a--) {
		m = n;
		while (m != 0 && m % 10 != a) {
			m = m / 10;
		}
		if (m != 0) {
			nr = nr * 10 + m % 10;
		}
	}
	cout << nr;
}