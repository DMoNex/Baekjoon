#include <iostream>
using namespace std;

int main() {
	int T, N;

	cin >> T;
	while (T--) {
		cin >> N;

		if (N == 1000)
			cout << "NO\n";
		else if (N >= 100) {
			if ((N * N) % 1000 == N)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else if (N >= 10) {
			if ((N * N) % 100 == N)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else {
			if ((N * N) % 10 == N)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
