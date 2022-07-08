#include <iostream>
using namespace std;

int main() {
	int D, H, M;
	int result = 0;

	cin >> D >> H >> M;

	if ((D < 11) || (D == 11 && H < 11) || (D == 11 && H == 11 && M < 11)) {
		cout << -1;
		return 0;
	}
	else {
		result += (M - 11);
		if (M < 11) {
			result += 60;
			--H;
		}

		result += (60 * (H - 11));
		if (H < 11) {
			result += 1440;
			--D;
		}

		result += (1440 * (D - 11));
	}

	cout << result;
}
