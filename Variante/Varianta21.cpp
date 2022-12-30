#include <iostream>
using namespace std;

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	if (b == 0) {
		cout << "Bad value, division with 0 is impossible!";
	}
	else {
		cout << a / b;
		if (n > 0 && a % b != 0) {
			cout << ",";
			a = a % b;
			int i = 0;
			do {
				cout << (a * 10) / b;
				a = (a * 10) % b;
				i = i + 1;
			} while (i != n && a != a);
		}
	}
}
