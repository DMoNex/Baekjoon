#include <iostream>
using namespace std;

int main() {
	int people = 0, result = 0;
	int IN, OUT;

	for (int i = 0; i < 10; ++i) {
		cin >> OUT >> IN;
		people += (IN - OUT);

		if (people > result)
			result = people;
	}

	cout << result;
}
