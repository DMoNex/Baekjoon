#include <iostream>
using namespace std;

int main() {
	int N, a, result = 1;

	cin >> N;
	while (N--) {
		cin >> a;

		result += (a - 1);
	}

	cout << result;
}
