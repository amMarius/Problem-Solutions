#include <iostream>
using namespace std;

int main() {
	int n, j;
	cin >> n;
	for (int i = 1; i <= 2 * n - 1; i++) {
		int b = 0;
		if (n - i < 0) {
			j = i - n;
		}
		else {
			j = n - i;
		}
		while (j >= 0) {
			cout << "*";
			j = j - 1;
			b = 1;
		}
		if (b == 0) {
			cout << '\n';
		}
	}
}