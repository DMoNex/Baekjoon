#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string num;
	int start, end;
	bool result = true;

	do {
		cin >> num;

		if (num == "0") break;

		result = true;
		start = 0;
		end = num.size() - 1;
		
		while (start <= end) {
			if (num[start] != num[end]) {
				result = false;
				break;
			}
			++start;
			--end;
		}

		if (result == false) {
			cout << "no\n";
		}
		else {
			cout << "yes\n";
		}
	} while (num != "0");
}
