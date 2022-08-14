#include <iostream>
using namespace std;

int main() {
	int N, a, b;
	bool object[3] = { true, false, false };

	cin >> N;
	while (N--) {
		cin >> a >> b;
		
		if (object[a - 1] || object[b - 1]) {
			object[a - 1] = !object[a - 1];
			object[b - 1] = !object[b - 1];
		}
	}

	for (int i = 0; i < 3; ++i)
		if (object[i]) cout << i + 1;
}
