#include <iostream>
using namespace std;

int main() {
	int T, input, Q, D, N, P;
	cin >> T;
	while (T--) {
		Q = 0;
		D = 0;
		N = 0;
		P = 0;
		cin >> input;
		
		while (input >= 25) {
			input -= 25;
			Q++;
		}
		while (input >= 10) {
			input -= 10;
			D++;
		}
		while (input >= 5) {
			input -= 5;
			N++;
		}
		while (input > 0) {
			input -= 1;
			P++;
		}

		cout << Q << ' ' << D << ' ' << N << ' ' << P << '\n';
	}
}
