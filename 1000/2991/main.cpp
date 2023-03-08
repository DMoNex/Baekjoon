#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, tmp;
	int arr[3] = { 0 };
	int res = 0;

	cin >> A >> B >> C >> D >> arr[0] >> arr[1] >> arr[2];
	for (int i = 0; i < 3; ++i) {
		res = 0;
		
		tmp = (arr[i] - 1) % (A + B);
		if (tmp < A) res++;
		
		tmp = (arr[i] - 1) % (C + D);
		if (tmp < C) res++;

		cout << res << '\n';
	}
}
