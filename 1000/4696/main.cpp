#include <iostream>
using namespace std;

int main() {
	double a;

	while (true) {
		cin >> a;

		if (a == 0)
			break;
		else {
			printf("%.2lf\n", 1 + (a) + (a * a) + (a * a * a) + (a * a * a * a));
		}
	}
}
