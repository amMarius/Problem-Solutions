#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, k = 0, b;
	cin >> a;
	while (a != 0) {
		cin >> b;
		if (a % 10 == b % 10) {
			k++;
		}
		a = b;
	}
	cout << k;
}
