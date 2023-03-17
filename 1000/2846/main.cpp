#include <iostream>
using namespace std;

int main() {
	int N, mn = 1001, mx = 0, input, res = 0;

	cin >> N;
	cin >> mn;
	mx = mn;
	for (int i = 1; i < N; ++i) {
		cin >> input;
		if (mx < input) {
			mx = input;
		}
		else {
			mn = mx = input;
		}

		res = res < mx - mn ? mx - mn : res;
	}

	cout << res;
}
