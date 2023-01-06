#include <iostream>
#include <string>
using namespace std;

int oddCase(string str, int i) {
	int count = str.length() - i;
	int left = i, right = i;

	for (int j = 0; j < count; ++j) {
		if (str[left] == str[right]) {
			--left;
			++right;
		}
		else {
			return -1;
		}
	}

	return i * 2 + 1;
}

int evenCase(string str, int i) {
	if (str.length() <= 1) return -1;

	int count = str.length() - i;
	int left = i - 1, right = i;
	
	for (int j = 0; j < count; ++j) {
		if (str[left] == str[right]) {
			--left;
			++right;
		}
		else {
			return -1;
		}
	}

	return i * 2;
}

bool check(string str, int i) {
	int odd = oddCase(str, i), even = evenCase(str, i);
	
	if (odd == -1 && even == -1) {
		return false;
	}
	else {
		if (odd == -1) cout << even;
		else if (even == -1) cout << odd;
		else cout << min(odd, even);
		return true;
	}
}

int main() {
	string str;
	int result = 100;

	cin >> str;

	for (int i = str.length() / 2; i < str.length(); ++i) {
		if (check(str, i)) break;
	}
}
