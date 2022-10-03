#include <iostream>
using namespace std;

int main() {
	int E, S, M, y = 1;

	cin >> E >> S >> M;

	while (true) {
		if ((y - E) % 15 == 0 && (y - S) % 28 == 0 && (y - M) % 19 == 0) {
			cout << y;
			break;
		}
		y++;
	}
}
