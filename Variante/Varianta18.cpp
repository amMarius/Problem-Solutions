#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if (x > y) {
		int k = x;
		x = y;
		y = k;
	}
	if (x % 2 == 0) {
		x += 1;
	}
	while (x <= y) {
		x = x + 2;
		cout << '*';
	}
}
