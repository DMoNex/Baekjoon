#include <iostream>
using namespace std;

int main() {
	int N, a, b, c;

	cin >> N;
	cout << "Gnomes:\n";
	while (N--) {
		cin >> a >> b >> c;

		if ((a > b && b > c) || (a < b && b < c))
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
}
