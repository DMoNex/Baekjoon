#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0, result = 0;
	cin >> x >> y;

	for (int i = 1; i < x; ++i) {
		if (i == 2) {
			result += 28;
		}
		else if (i == 1 || i == 3 || i == 5 || i == 7
		                || i == 8 || i == 10) {
			result += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			result += 30;
		}
	}
	result += y;

	int day = result % 7;
	
	if (day == 1) { cout << "MON"; }
	else if (day == 2) { cout << "TUE"; }
	else if (day == 3) { cout << "WED"; }
	else if (day == 4) { cout << "THU"; }
	else if (day == 5) { cout << "FRI"; }
	else if (day == 6) { cout << "SAT"; }
	else if (day == 0) { cout << "SUN"; }
}
