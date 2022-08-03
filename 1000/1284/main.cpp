#include <iostream>
using namespace std;

int main() {
	string str;
	int result = 1;

	while (str != "0") {
		cin >> str;

		result = 1;
		for (int i = 0; i < str.size(); ++i) {
			switch (str[i]) {
			case '0':
				result += 2;
			case '1':
				result += 2;
				break;
			default:
				result += 3;
				break;
			}
			result++;
		}

		if(str != "0")
			cout << result << '\n';
	}
}
