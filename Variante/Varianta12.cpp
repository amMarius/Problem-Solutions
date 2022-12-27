#include <iostream>
using namespace std;

int main() {
	int x, y = 0;
	cin >> x;
	while (x != 0) {
		while (x > 9) {
			x = x / 10;
		}
		y = y * 10 + x;
		cin >> x;
	}
	cout << y;
}