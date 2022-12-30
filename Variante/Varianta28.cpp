#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x;
	cin >> x;
	int y;
	y = floor(x);
	while (x != (int)x) {
		x = x * 10;
	}
	if (x == y) {
		cout << 1;
	}
	else {
		cout << 2;
	}
}
