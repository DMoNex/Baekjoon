#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = N - 1; i >= 0; --i) {
		for (int j = 1; j < N - i; ++j)
			cout << ' ';
		for (int k = 0; k < 2 * i + 1; ++k)
			cout << '*';
		cout << '\n';
	}
}
