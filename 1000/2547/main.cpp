#include <iostream>
using namespace std;

int main() {
	int T;

	cin >> T;
	while (T--) {
		long long sum = 0, tmp;
		int N;
		
		cin >> N;
		for (int i = 0; i < N; ++i) {
			cin >> tmp;
			sum %= N;
			sum += tmp;
		}

		if (sum % N)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
