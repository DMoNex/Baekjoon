#include <iostream>
#include <string>
using namespace std;

int getDiff(int A, int B) {
	return A > B ? A - B : B - A;
}

int main() {
	string input;
	int countA[26] = { 0 }, countB[26] = { 0 }, result = 0;

	cin >> input;
	for (int i = 0; i < input.size(); ++i) {
		countA[input[i] - 'a']++;
	}
	
	cin >> input;
	for (int i = 0; i < input.size(); ++i) {
		countB[input[i] - 'a']++;
	}

	for (int i = 0; i < 26; ++i) {
		result += getDiff(countA[i], countB[i]);
	}

	cout << result;
}
