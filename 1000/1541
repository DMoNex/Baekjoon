#include <iostream>
#include <string>
#include <vector>
using namespace std;

int atoi(string input) {
	int result = 0;

	for (int i = 0; i < input.size(); ++i) {
		result *= 10;
		result += (input[i] - '0');
	}
	
	return result;
}

int main() {
	string input, substr;
	int tmp_iter = 0, tmp = 0;
	vector<int> sum;

	cin >> input;
	for (int i = 0; i <= input.size(); ++i) {
		if (i == input.size() || input[i] == '+' || input[i] == '-') {
			substr = input.substr(tmp_iter, i - tmp_iter);
			tmp_iter = i + 1;
			tmp += atoi(substr);
			
			if (i == input.size() || input[i] == '-') {
				sum.push_back(tmp);
				tmp = 0;
			}
		}
	}

	int result = sum[0];
	for (int i = 1; i < sum.size(); ++i)
		result -= sum[i];

	cout << result;
}
