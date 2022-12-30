#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, m, p, c;
	m = 0;
	p = 1;
	while(n > 0) {
		c = n % 10;
		if (c > 0) {
			c -= 1;
		}
		m = m + c * p;
		p = p * 10;
		n = n / 10;
	}
	cout << m;
}
