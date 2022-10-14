#include <iostream>
#include <vector>
using namespace std;

int main() {
	char convert[12] = { '-', 'A', '-', 'B', 'C', '-', 'D', '-', 'E', 'F', '-', 'G' };
	bool sound[12] = { false, true, false, true, true, false, true, false, true, true, false, true };
	int N, tap;
	bool flag = false;

	cin >> N;
	vector<int> score(N);

	for (int i = 0; i < N; ++i)
		cin >> score[i];

	for (int i = 0; i < 12; ++i) {
		flag = true;
		if (!sound[i]) continue;
		
		tap = i;
		for (int j = 0; j < score.size(); ++j) {
			tap += score[j];
			
			while (tap > 11) {
				tap -= 12;
			}
			while (tap < 0) {
				tap += 12;
			}
			
			if (!sound[tap]) {
				flag = false;
				break;
			}
		}

		if (flag)
			cout << convert[i] << ' ' << convert[tap] << '\n';
	}
}
