#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	double num;
	string unit;

	cin >> T;
	while (T--) {
		cin >> num >> unit;

		if (unit == "kg") {
			num *= 2.2046;
			unit = "lb";
		}
		else if (unit == "l") {
			num *= 0.2642;
			unit = "g";
		}
		else if (unit == "lb") {
			num *= 0.4536;
			unit = "kg";
		}
		else if (unit == "g") {
			num *= 3.7854;
			unit = "l";
		}

		printf("%.4lf %s\n", num, unit.c_str());
	}
}
