#include <iostream>
using namespace std;

int main() {
	int N, K, i = 0, j = 0;
	string input;
	int arr[20] = { 0 };
	bool minus = false;

	cin >> N >> K >> input;
	
	for (i = 0; i < input.size(); ++i) {
		if (input[i] == ',') {
			++j;
			minus = false;
		}
		else if (input[i] == '-')
			minus = true;
		else {
			arr[j] *= 10;
			if (minus)
				arr[j] += (input[i] - '0') * -1;
			else
				arr[j] += (input[i] - '0');
		}
	}

	while (K--) {
		for (i = 0; i < N; ++i)
			arr[i] = arr[i + 1] - arr[i];

		N--;
	}

	for (i = 0; i < N; ++i) {
		cout << arr[i];
		if (i != N - 1)
			cout << ',';
	}
}
