#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string input;

	cin >> N;
	getline(cin, input);
	for(int i = 1; i <= N; ++i) {
		getline(cin, input);
		cout << i << ". " << input << '\n';
	}
}
