#include <iostream>
#include <string>
using namespace std;

int main() {
	int res0 = 0, res1 = 0;
	string input;

	cin >> input;

	string::size_type iter = 0;
	while ((iter = input.find("0", iter)) != string::npos) {
		res0++;
		
		if ((iter = input.find("1", iter)) == string::npos)
			break;
	}

	iter = 0;
	while ((iter = input.find("1", iter)) != string::npos) {
		res1++;

		if ((iter = input.find("0", iter)) == string::npos)
			break;
	}

	res0 > res1 ? cout << res1 : cout << res0;
}
