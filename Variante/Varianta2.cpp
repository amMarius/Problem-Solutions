#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x;
	while (x > 0) {
		cin >> y;
		if (x > y) {
			cout << x % 10 << endl;
		}
		else {
			cout << y % 10 << endl;
		}
		x = y;
	}
}