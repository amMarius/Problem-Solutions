#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, k = 0;
	cin >> a;
	int b = (a + 1) * (a + 2) / 2;
	while (b >= a) {
		b -= a;
		k++;
	}
	cout << b << " " << k;
}
