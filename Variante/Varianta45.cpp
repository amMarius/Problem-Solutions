#include <iostream>
using namespace std;

int main() {
	int x, y, z = 1, t = 0;
	cin >> x >> y;
	while (x >= z) {
		if (x % z == y) {
			t = z;
		}
		z++;
	}
	cout << t;
}