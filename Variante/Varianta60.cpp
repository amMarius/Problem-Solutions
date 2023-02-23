#include <iostream>
using namespace std;

int main() {
	int n, c = 10;
	cin >> n;
	while (n % 2 == 1) {
		c = n % 10;
		n = n / 10;
	}
	cout << c;
}