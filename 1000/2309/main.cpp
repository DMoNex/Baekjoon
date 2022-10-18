#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int arr[9] = { 0 };
	vector<int> select;

	for (int i = 0; i < 9; ++i)
		cin >> arr[i];

	for (int i1 = 0; i1 < 9; ++i1) {
		for (int i2 = i1 + 1; i2 < 9; ++i2) {
			for (int i3 = i2 + 1; i3 < 9; ++i3) {
				for (int i4 = i3 + 1; i4 < 9; ++i4) {
					for (int i5 = i4 + 1; i5 < 9; ++i5) {
						for (int i6 = i5 + 1; i6 < 9; ++i6) {
							for (int i7 = i6 + 1; i7 < 9; ++i7) {
								if (arr[i1] + arr[i2] + arr[i3] + arr[i4] + arr[i5] + arr[i6] + arr[i7] == 100) {
									select.push_back(arr[i1]);
									select.push_back(arr[i2]);
									select.push_back(arr[i3]);
									select.push_back(arr[i4]);
									select.push_back(arr[i5]);
									select.push_back(arr[i6]);
									select.push_back(arr[i7]);

									sort(select.begin(), select.end());

									for (int i = 0; i < 7; ++i)
										cout << select[i] << '\n';

									return 0;
								}
							}
						}
					}
				}
			}
		}
	}
}
