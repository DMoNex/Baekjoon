#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		cout << i + 1 << ' ';
		if (i % 6 == 5)
			cout << "Go! ";
	}

	if (N % 6 != 0)
		cout << "Go!";
}
