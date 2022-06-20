#include <iostream>
using namespace std;

int main() {
	int count[3] = { 0 }; // 10, 5, 2
	int N, num;

	cin >> N;
	for (int i = 1; i <= N; ++i) {
		num = i;

		while (num % 10 == 0) {
			++count[0];
			num /= 10;
		}
		while (num % 5 == 0) {
			++count[1];
			num /= 5;
		}
		while (num % 2 == 0) {
			++count[2];
			num /= 2;
		}
	}

	cout << count[0] + min(count[1], count[2]) << '\n';
}
