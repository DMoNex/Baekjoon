#include <iostream>
#include <string>
using namespace std;

int main() {
	string L, R;
	int result = 0;

	cin >> L >> R;

	if (L.length() == R.length()) {
		for (int i = 0; i < L.length(); ++i) {
			if (L[i] != R[i]) break;
			else if (L[i] == '8') ++result;
		}
	}

	cout << result;
}
