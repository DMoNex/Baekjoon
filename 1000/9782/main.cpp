#include <iostream>
using namespace std;

int main() {
	int N, cnt = 1;

	while (true) {
		int arr[100] = { 0 };

		cin >> N;
		if (N == 0) break;
		for (int i = 0; i < N; ++i)
			cin >> arr[i];

		cout << "Case " << cnt++ << ": ";

		if (N % 2 == 1)
			cout << arr[N / 2] << ".0\n";
		else
			cout << ((arr[N / 2 - 1] + arr[N / 2]) * 5) / 10 << '.' << ((arr[N / 2 - 1] + arr[N / 2]) * 5) % 10 << '\n';
	}
}
