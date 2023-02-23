#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, k = 0, b, k;
	cin >> a;
	while (a != 0) {
		cin >> b;
		if (a < b) {
			k++;
		}
		a = b;
	}
	cout << k;
}
