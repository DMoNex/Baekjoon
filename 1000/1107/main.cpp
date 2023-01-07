#include <iostream>
using namespace std;

int abs(int a, int b) {
	return a > b ? a - b : b - a;
}

int getIntSize(int a) {
	int ret = 0, tmp = a;

	if (a == 0)
		return 1;

	while (tmp > 0) {
		tmp /= 10;
		ret++;
	}

	return ret;
}

bool canJump(bool* disable, int a) {
	int tmp = a;

	if (tmp == 0)
		return !disable[0];

	while (tmp > 0) {
		if (disable[tmp % 10] == true)
			return false;
		else
			tmp /= 10;
	}

	return true;
}

int main() {
	int N, M, curCh = 100, jumpCh, tmp, ret1, ret2 = 1000000;
	bool disableButton[10] = { 0 };

	cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		cin >> tmp;
		disableButton[tmp] = true;
	}

	ret1 = abs(curCh, N);
	
	jumpCh = N;
	tmp = 0;
	while (tmp < 500000) {
		if (jumpCh - tmp >= 0 && canJump(disableButton, jumpCh - tmp)) {
			ret2 = getIntSize(jumpCh - tmp) + tmp;
			break;
		}
		else if (canJump(disableButton, jumpCh + tmp)) {
			ret2 = getIntSize(jumpCh + tmp) + tmp;
			break;
		}

		tmp++;
	}

	if (ret1 < ret2)
		cout << ret1;
	else
		cout << ret2;
}
