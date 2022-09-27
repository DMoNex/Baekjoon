#include <iostream>
#include <string>
using namespace std;

int main() {
	int count[10] = { 0 };
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); ++i)
		count[input[i] - '0']++;

	for (int i = 9; i >= 0; --i)
		for (int j = 0; j < count[i]; ++j)
			cout << i;
}
