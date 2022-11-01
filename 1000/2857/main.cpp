#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int cnt = 0;

	for (int i = 0; i < 5; ++i) {
		cin >> input;
		
		if (input.find("FBI") != string::npos) {
			cout << i + 1 << ' ';
			cnt++;
		}
	}

	if(!cnt)
		cout << "HE GOT AWAY!";
}
