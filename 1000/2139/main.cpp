#include <iostream>
using namespace std;

int getDay(int M, int y) {
	switch (M) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (y % 400 == 0)
			return 29;
		else if (y % 100 == 0)
			return 28;
		else if (y % 4 == 0)
			return 29;
		else
			return 28;
	}
}

int main() {
	int y, m, d, result = 0;

	while (true) {
		result = 0;
		cin >> d >> m >> y;

		if (y + m + d == 0) break;

		for (int i = 1; i < m; ++i)
			result += getDay(i, y);

		cout << result + d << '\n';
	}
}
