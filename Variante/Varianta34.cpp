#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x, y, aux;
	cin >> x >> y;
	x = x % 10;
	y = y % 10;
	if (y < x) {
		aux = y;
		y = x;
		x = aux;
	}
	while (x <= y) {
		cout << x * 10 + y << endl;
		x += 1;
		y -= 1;
	}
}
