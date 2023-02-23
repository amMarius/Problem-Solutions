#include <iostream>
using namespace std;

int main() {
	int x, z, y;
	cin >> x >> y;
	while (y > 0) {
		z = x % y;
		x = y;
		y = z;
	}
	cout << x;
}