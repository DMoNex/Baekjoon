#include <iostream>
using namespace std;

int main() {
	int age, a, b;

	while (true) {
		cin >> age;

		if (age <= 0)
			break;

		int result = 1;
		for (int i = 0; i < age; ++i) {
			cin >> a >> b;

			result *= a;
			result -= b;
		}
		cout << result << '\n';
	}
}
