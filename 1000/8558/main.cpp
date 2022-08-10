#include <iostream>
using namespace std;

int main() {
	int N, result = 1;

	cin >> N;
	while (N) {
		result *= N;
		if (result >= 10)
			result %= 10;
		N--;
	}
	cout << result;
}
