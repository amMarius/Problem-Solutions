#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int s = 0, a, b, v;
	cin >> v;
	while (v != 0) {
		a = v % 10;
		b = v / 10 % 10;
		s = s + a * 10 + b;
		cout << s << endl;
		cin >> v;
	}
	cout << s;
}
