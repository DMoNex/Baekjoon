#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	a *= a;
	b *= b;
	c *= c;
	d *= d;
	e *= e;

	cout << (a + b + c + d + e) % 10;
}
