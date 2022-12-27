#include <iostream>
using namespace std;

int main() {
	int a, b, s;
	cin >> a >> b;
	if (a < b) {
		s = a;
		a = b;
		b = s;
	}
	for (int x = a; x >= b; x--) {
		if (x % 2 == 0) {
			cout << x << " ";
		}
	}
}