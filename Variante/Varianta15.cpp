#include <iostream>
using namespace std;

int main() {
	int a, n;
	cin >> a >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			a = a - i * i;
		}
		else {
			a = a + i * i;
		}
	}
	cout << a;
}