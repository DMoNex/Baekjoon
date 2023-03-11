#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int T, c, cnt;
	string a, b;

	cin >> T;
	while (T--) {
		c = 0;
		cin >> a >> b;
		
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		int len = max(a.size(), b.size());
		string arr;
		for (int i = 0; i < len; ++i) {
			cnt = 0;
			if (i < a.size() && a[i] == '1') cnt++;
			if (i < b.size() && b[i] == '1') cnt++;
			if (c == 1) cnt++;

			switch (cnt) {
			case 1:
				c = 0;
				arr += '1';
				break;
			case 2:
				c = 1;
				arr += '0';
				break;
			case 3:
				arr += '1';
				break;
			case 0:
				arr += '0';
				break;
			}
		}

		if (c == 1) arr += '1';
		
		reverse(arr.begin(), arr.end());

		bool flag = false;
		for (int j = 0; j < arr.size(); ++j) {
			if (flag == false && arr[j] == '1')
				flag = true;

			if (flag == false) continue;
			
			cout << arr[j];
		}

		if (flag == false)
			cout << 0;

		cout << '\n';
	}
}
