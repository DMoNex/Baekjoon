#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	int T, i = 0, j = 0, src, dst, result[2] = { 0 }, count, minCount = 36;
	bool pic[5][7][50] = { 0 };

	cin >> T;

	for (int iter = 0; iter < T; ++iter) {
		for (i = 0; i < 5; ++i) {
			cin >> input;
			for (j = 0; j < 7; ++j) {
				if (input[j] == '.')
					pic[i][j][iter] = true;
				else
					pic[i][j][iter] = false;
			}
		}
	}

	for (src = 0; src < T - 1; ++src) {
		for (dst = src + 1; dst < T; ++dst) {
			count = 0;
			for (i = 0; i < 5; ++i) {
				for (j = 0; j < 7; ++j) {
					if (pic[i][j][src] != pic[i][j][dst])
						count++;

					if (count > minCount)
						break;
				}
				if (count > minCount)
					break;
			}
			if (count > minCount)
				continue;
			
			if (count < minCount) {
				minCount = count;
				result[0] = src;
				result[1] = dst;
			}
		}
	}

	cout << result[0] + 1 << ' ' << result[1] + 1;
}
