#include <iostream>
#include <string>
using namespace std;

int main() {
	string arr;
	int space = 0;

	cin >> arr;
	
	string tmp = arr;

	arr += "0000";
	
	for (int i = tmp.size() - 1; i >= 0; --i) {
		if (arr[i + 4 + space] == '0' && tmp[i] == '0') continue;
		else if (arr[i + 4 + space] != tmp[i]) arr[i + 4 + space] = '1';
		else if (arr[i + 4 + space] == '1' && tmp[i] == '1') {
			arr[i + 4 + space] = '0';
			int t = 3;
			while (i + t >= -1) {
				if (i + t == -1) {
					arr = '1' + arr;
					++space;
					break;
				}
				if (arr[i + t] == '0') {
					arr[i + t] = '1';
					break;
				}
				else {
					arr[i + t] = '0';
					--t;
				}
			}
		}
	}

	cout << arr;
}
