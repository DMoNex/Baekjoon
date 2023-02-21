#include <iostream>
#include <string>
using namespace std;

int main() {
	int P;
	string input, sub;
	
	cin >> P;
	while (P--) {
		int cnt[8] = { 0 };

		cin >> input;
		for (int i = 0; i < input.size() - 2; ++i) {
			sub = input.substr(i, 3);
			
			if (sub == "HHH") cnt[7]++;
			else if (sub == "HHT") cnt[6]++;
			else if (sub == "HTH") cnt[5]++;
			else if (sub == "HTT") cnt[4]++;
			else if (sub == "THH") cnt[3]++;
			else if (sub == "THT") cnt[2]++;
			else if (sub == "TTH") cnt[1]++;
			else if (sub == "TTT") cnt[0]++;
		}

		for (int i = 0; i < 8; ++i)
			cout << cnt[i] << ' ';
		cout << '\n';
	}
}
