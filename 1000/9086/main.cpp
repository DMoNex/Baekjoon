#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int T;

	cin >> T;
	for(int i = 0; i < T; ++i) {
		cin >> input;
		cout << input[0] << input[input.size() - 1] << '\n';
	}
}
