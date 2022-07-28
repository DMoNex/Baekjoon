#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * (b / gcd(a, b));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, M, N, a, b, tmp;
	bool flag = false;

	cin >> T;
	while (T--) {
		cin >> M >> N >> a >> b;

		flag = false;
		for (int i = a; i <= lcm(M, N); i += M) {
			if (((i % N == 0) ? N : i % N) == b) {
				flag = true;
				cout << i << '\n';
				break;
			}
		}
		if (!flag)
			cout << "-1\n";
	}
}
