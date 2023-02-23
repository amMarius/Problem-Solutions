#include <iostream>
using namespace std;

int main() {
	int x, y, n = 0;
	cin >> x >> y;
	while (x >= y) {
		x -= y;
		n++;
	}
	cout << n << x;
}