#include <iostream>
using namespace std;

int main() {
	int n, a, k, b;
	cin >> n >> a;
	k = 0;
	for (int i = 2; i <= n; i++) {
		cin >> b;
		if (a % 10 == b % 10) {
			k++;
		}
		a = b;
	}
	cout << k;
}