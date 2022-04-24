#include <iostream>
using namespace std;

int main() {
	int A, B, tmpNum = 1;
	int arr[1000] = { 0 };
	int result = 0;

	cin >> A >> B;

	for (int i = 0; i < B; i) {
		for (int j = 0; j < tmpNum; ++j) {
			arr[i] = tmpNum;
			++i;

			if (i >= B) break;
		}

		++tmpNum;
	}

	for (int i = A - 1; i < B; ++i) {
		result += arr[i];
	}

	cout << result;
}
