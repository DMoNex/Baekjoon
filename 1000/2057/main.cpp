#include <iostream>
using namespace std;

int main() {
	long long arr[21] = { 0 };
	long long num, sum;
	int lo = 0, hi = 0;
	bool flag = false;

	arr[0] = 1;
	for (int i = 1; i < 21; ++i)
		arr[i] = arr[i - 1] * i;

	cin >> num;

	sum = 0;
	for (int i = 20; i >= 0; --i) {
		if (arr[i] > num) continue;

		if (arr[i] <= num - sum)
			sum += arr[i];

		if (sum == num) {
			flag = true;
			break;
		}
	}

	if (flag)
		cout << "YES";
	else
		cout << "NO";
}
