#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count[8001] = { 0 };
	int N, max_val = 8000, min_val = 0, sum = 0;
	
	cin >> N;
	vector<int> arr(N);
	for(int i = 0; i < N; ++i) {
		cin >> arr[i];
		++count[arr[i] + 4000];
		sum += arr[i];
	}

	sort(arr.begin(), arr.end());

	while (count[min_val] == 0) ++min_val;
	while (count[max_val] == 0) --max_val;

	cout << (int)round((float)sum / N) << '\n' << arr[arr.size() / 2] << '\n';
	
	int max_freq = 0, first_val = 0, second_val = 0;
	for (int i = min_val; i <= max_val; ++i) {
		if (max_freq < count[i]) {
			max_freq = count[i];
			first_val = i;
			second_val = -1;
		}
		else if (second_val == -1 && max_freq == count[i]) {
			second_val = i;
		}
	}
	if (second_val == -1) cout << first_val - 4000 << '\n';
	else cout << second_val - 4000 << '\n';

	cout << max_val - min_val << '\n';

}
