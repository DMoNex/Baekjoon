#include <iostream>
using namespace std;

int main() {
	int mn = 1, mx = 1, input, sum = 1, res = 0;

	cin >> input;
	while (mn <= input && mx <= input) {
		if (sum < input)
			sum += (++mx);
		else if (sum > input)
			sum -= (mn++);
		else {
			res++;
			sum += (++mx);
		}
	}

	cout << res;
}
