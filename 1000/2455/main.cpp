#include <iostream>
using namespace std;

int main() {
	int people[4][2] = { 0 };
	int result = 0, m = 0;

	for (int i = 0; i < 4; ++i)
		cin >> people[i][0] >> people[i][1];

	for (int i = 0; i < 4; ++i) {
		result += (people[i][1] - people[i][0]);
		m = max(result, m);
	}

	cout << m;
}
