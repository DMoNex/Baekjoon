#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	bool flag = true;
	int k, i = 2;
	
	cin >> input >> k;
	while (i < k) {
		int result = 0;
		
		for (int j = 0; j < input.size(); ++j) {
			result *= 10;
			result += (input[j] - '0');
			result %= i;
		}

		if (result == 0) {
			flag = false;
			break;
		}
			
		i++;
	}

	if (flag)
		cout << "GOOD";
	else
		cout << "BAD " << i;
}
