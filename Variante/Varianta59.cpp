#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	do {
		n = ((n % 100) / 10) + (n / 10);
	} while (n >= 10);
	cout << n;
}