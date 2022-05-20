#include <iostream>
using namespace std;

int main() {
	int a, b, c, result = 0;
	int r1 = 0, r2 = 0, r3 = 0;

	cin >> a >> b >> c;

	if (a == b) ++r1;
	if (b == c) ++r2;
	if (a == c) ++r3;

	switch (r1 + r2 + r3) {
	case 0:
		result = max(max(a, b), c) * 100;
		break;
	case 1:
		int tmp;

		if (r2 == 1) tmp = b;
		else tmp = a;

		result = 1000 + tmp * 100;
		break;
	case 3:
		result = 10000 + a * 1000;
		break;
	}

	cout << result;
}
