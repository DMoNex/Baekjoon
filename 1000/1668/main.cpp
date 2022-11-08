#include <iostream>
using namespace std;

int main() {
	int N, cnt, tmp, arr[50] = { 0 };
	cin >> N;
	
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	tmp = 0;
	cnt = 0;
	for (int i = 0; i < N; ++i) {
		if (tmp < arr[i]) {
			tmp = arr[i];
			cnt++;
		}
	}
	cout << cnt << '\n';
	
	tmp = 0;
	cnt = 0;
	for (int i = N - 1; i >= 0; --i) {
		if (tmp < arr[i]) {
			tmp = arr[i];
			cnt++;
		}
	}
	cout << cnt << '\n';
}
