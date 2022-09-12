#include <iostream>
using namespace std;

int main() {
	int T;
	long long input;
	bool flag;
	
	cin >> T;
	while (T--) {
		flag = true;

		cin >> input;
		
		if (input % 2 == 0) {
			cout << "NO\n";
			continue;
		}

		for (int i = 3; i <= 1000000; i += 2) {
			if (input % i == 0) {
				cout << "NO\n";
				flag = false;
				break;
			}
		}

		if(flag)
			cout << "YES\n";
	}
}
