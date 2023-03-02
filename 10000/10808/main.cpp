#include <iostream>
#include <string>
using namespace std;

int main() {
	int count[26] = { 0 };
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); ++i)
		count[input[i] - 'a']++;

	for (int i = 0; i < 26; ++i)
		cout << count[i] << ' ';
}
