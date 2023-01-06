#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, A, B;
	vector<int> time;
	
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> A >> B;
		time.push_back(B - A);
	}

	sort(time.begin(), time.end());

	if (N % 2 == 1) cout << 1;
	else {
		cout << time[N / 2] - time[N / 2 - 1] + 1;
	}
}
