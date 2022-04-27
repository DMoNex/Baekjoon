#include <iostream>
using namespace std;

int getDayFromYear(int year) {
	if (year % 400 == 0) return 366;
	else if (year % 100 == 0) return 365;
	else if (year % 4 == 0) return 366;
	else return 365;
}

int getDayFromMonth(int Month, int year) {
	switch (Month) {
	case 1: return 31;
	case 2:	if (getDayFromYear(year) == 365) return 28;
			else return 29;
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30;
	case 7: return 31;
	case 8: return 31;
	case 9: return 30;
	case 10: return 31;
	case 11: return 30;
	case 12: return 31;
	}
}

int main() {
	int curY, curM, curD;
	int dstY, dstM, dstD;
	int result = 0;

	cin >> curY >> curM >> curD >> dstY >> dstM >> dstD;

	if ((dstY > curY + 1000) || (dstY == curY + 1000 && dstM > curM) || (dstY == curY+1000 && dstM == curM && dstD >= curD)) {
		cout << "gg";
		return 0;
	}

	result += (dstD - curD);
	curD = dstD;

	while (curM != dstM) {
		result += getDayFromMonth(curM, curY);
		if (curM == 12) ++curY;
		++(curM %= 12);
	}

	while (curY != dstY) {
		result += getDayFromYear(curY);
		++curY;
	}

	cout << "D-" << result;
}
