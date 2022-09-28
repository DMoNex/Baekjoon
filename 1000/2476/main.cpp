#include <iostream>
using namespace std;

int main() {
	int a, b, c, N, count, result = 0, tmp;

	cin >> N;
	while (N--) {
		tmp = 0;
		count = 0;

		cin >> a >> b >> c;

		if (a == b) count++;
		if (b == c) count++;
		if (a == c) count++;

		switch (count) {
		case 3:
			tmp = 10000 + (a * 1000);
			break;
		case 1:
			if (a == b || a == c)
				tmp = 1000 + (a * 100);
			else
				tmp = 1000 + (b * 100);
			
			break;
		case 0:
			a > b ? tmp = a : tmp = b;
			c > tmp ? tmp = c : false;
			tmp *= 100;
			break;
		}

		tmp > result ? result = tmp : false;
	}

	cout << result;
}
