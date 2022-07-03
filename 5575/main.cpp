#include <iostream>
using namespace std;

int main() {
	int start_h, start_m, start_s, end_h, end_m, end_s;
	int result[3] = { 0 };

	for (int i = 0; i < 3; ++i) {
		cin >> start_h >> start_m >> start_s >> end_h >> end_m >> end_s;

		result[0] = end_h - start_h;
		result[1] = end_m - start_m;
		result[2] = end_s - start_s;

		if (result[2] < 0) {
			--result[1];
			result[2] += 60;
		}
		if (result[1] < 0) {
			--result[0];
			result[1] += 60;
		}

		cout << result[0] << ' ' << result[1] << ' ' << result[2] << endl;
	}
}
