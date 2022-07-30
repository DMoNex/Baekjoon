#include <iostream>
using namespace std;

int main() {
	int T, Y = 0, M = 0, time;

	cin >> T;
	while (T--) {
		cin >> time;
		Y += (time / 30 + 1) * 10;
		M += (time / 60 + 1) * 15;
	}

	if (Y <= M) cout << "Y ";
	if (M <= Y) cout << "M ";
	cout << min(Y, M);
}
