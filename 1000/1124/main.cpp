#include <iostream>
#include <vector>
using namespace std;

void eratosInit(int* primeArr, vector<int>& primeV) {
	for (int i = 2; i < 100001; ++i) {
		primeArr[i] = i;
	}

	for (int i = 2; i * i < 100001; ++i) {
		if (primeArr[i] == i) {
			for (int j = i * i; j < 100001; j += i) {
				if (primeArr[j] == j)
					primeArr[j] = i;
			}
		}
	}

	for (int i = 2; i < 100001; ++i) {
		if (primeArr[i] == i)
			primeV.push_back(i);
	}
}

int main() {
	int primeArr[100001] = { 0 };

	bool isPrimeArr[17] = { false, false, true, true, false,
							true, false, true, false, false,
							false, true, false, true, false,
							false, false };

	vector<int> primeV;
	eratosInit(primeArr, primeV);

	int A, B, result = 0, tmp, cnt;
	cin >> A >> B;

	for (int i = A; i <= B; ++i) {
		tmp = i;
		cnt = 0;

		for (int divIdx = 0; divIdx < primeV.size(); ++divIdx) {
			while (tmp % primeV[divIdx] == 0) {
				tmp /= primeV[divIdx];
				cnt++;
			}

			if (tmp == 1)
				break;
		}

		if (isPrimeArr[cnt]) {
			result++;
		}
	}

	cout << result;
}
