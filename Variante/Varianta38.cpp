#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, k, i;
	cin >> n >> k;
	i = k;
	while (i > 0) {
		n = n / 10;
		i -= 1;
	}
	int z = n % 10;
	cout << z;
}
