#include <iostream>
using namespace std;

int main() {
	int input, N, max = 0, money;
	
	cin >> N;
	while (N--) {
		money = 0;
		int dice[6] = { 0 };

		for (int i = 0; i < 4; ++i) {
			cin >> input;
			dice[input - 1]++;
		}

		for (int i = 5; i >= 0; --i) {
			if (dice[i] == 4) {
				money = 50000 + (i + 1) * 5000;
				max = max < money ? money : max;
				break;
			}
			else if (dice[i] == 3) {
				money = 10000 + (i + 1) * 1000;
				max = max < money ? money : max;
				break;
			}
			else if (dice[i] == 2) {
				bool find = false;
				int j;

				for (j = i - 1; j >= 0; --j) {
					if (dice[j] == 2) {
						find = true;
						break;
					}
				}

				if (find) {
					money = 2000 + (i + 1) * 500 + (j + 1) * 500;
				}
				else {
					money = 1000 + (i + 1) * 100;
				}

				max = max < money ? money : max;
				break;
			}
			else if (dice[i] == 1) {
				money = (i + 1) * 100;
				max = max < money ? money : max;
			}
		}
	}

	cout << max;
}
