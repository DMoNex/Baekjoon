#include <iostream>
using namespace std;

bool isIn(int src_x, int src_y, int target_x, int target_y, int distance) {
	return ((target_x - src_x) * (target_x - src_x)) + ((target_y - src_y) * (target_y - src_y)) <= (distance * distance);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, start_x, start_y, end_x, end_y, N;

	cin >> T;
	while (T--) {
		int count = 0;
		int tmp_x, tmp_y, tmp_dis;

		cin >> start_x >> start_y >> end_x >> end_y >> N;

		while (N--) {
			bool in, out;
			cin >> tmp_x >> tmp_y >> tmp_dis;
			
			in = isIn(end_x, end_y, tmp_x, tmp_y, tmp_dis);
			out = isIn(start_x, start_y, tmp_x, tmp_y, tmp_dis);
			if (out && !in) ++count;
			if (in && !out) ++count;
		}

		cout << count << '\n';
	}
}
