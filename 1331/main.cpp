#include <iostream>
#include <string>
using namespace std;

int main() {
	string tmp, cur;
	bool check[6][6] = { 0 };
	bool flag = false;
	char start[2] = { 0 };

	cin >> cur;
	check[cur[0] - 'A'][cur[1] - '1'] = true;
	start[0] = cur[0];
	start[1] = cur[1];

	for (int i = 0; i < 35; ++i) {
		cin >> tmp;

		if (check[tmp[0] - 'A'][tmp[1] - '1'] == true) {
			flag = true;
			break;
		}
		if (abs(cur[0] - tmp[0]) == 1 && abs(cur[1] - tmp[1]) == 2 || abs(cur[0] - tmp[0]) == 2 && abs(cur[1] - tmp[1]) == 1) {
			cur = tmp;
			check[cur[0] - 'A'][cur[1] - '1'] = true;
		}
		else {
			flag = true;
			break;
		}
	}

	if (flag == false)
		if (abs(start[0] - cur[0]) == 1 && abs(start[1] - cur[1]) == 2 || abs(start[0] - cur[0]) == 2 && abs(start[1] - cur[1]) == 1) {}
		else flag = true;

	if (flag) cout << "Invalid";
	else cout << "Valid";
}
