#include <iostream>
#include <string>
using namespace std;

int main() {
	int p, w, result = 0, last = 0;
	string input;
	int arr[2][27] = { { 1, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4 },
					   { 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 } };

	cin >> p >> w;
	getline(cin, input);
	getline(cin, input);

	for (int i = 0; i < input.size(); ++i) {
		if (input[i] == ' ') {
			result += p;
			last = 0;
		}
		else {
			result += arr[0][input[i] - 'A' + 1] * p;
			
			if (last == arr[1][input[i] - 'A' + 1])
				result += w;
			
			last = arr[1][input[i] - 'A' + 1];
		}
	}

	cout << result;
}
