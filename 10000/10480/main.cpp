#include <iostream>
using namespace std;

int main() {
	int N, input;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> input;
		if (input % 2 == 0)
			cout << input << " is even\n";
		else
			cout << input << " is odd\n";
	}
}
