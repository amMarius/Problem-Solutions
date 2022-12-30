#include <iostream>
using namespace std;

int main() {
	int n, c;
	cin >> n;
	c = 0;
	for (int i = 1; i <= n; i++) {
		c = (c + 1) % 10;
		cout << c;
	}
}
