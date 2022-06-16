#include <iostream>
using namespace std;

int main() {
	int A, B;

	cin >> A >> B;

	if (A < B) {
		cout << -1;
		return 0;
	}
	if ((A + B) % 2) {
		cout << -1;
		return 0;
	}
	if ((A - B) % 2) {
		cout << -1;
		return 0;
	}
	cout << (A + B) / 2 << ' ' << (A - B) / 2;
}
