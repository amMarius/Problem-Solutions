#include <iostream>
using namespace std;

int main() {
	int x, n, nr = 0;
	cin >> x;
	for (int i = 1; i <= 5; i++) {
		cin >> n;
		if (n % x == 0) {
			nr++;
		}
	}
	cout << nr;
}