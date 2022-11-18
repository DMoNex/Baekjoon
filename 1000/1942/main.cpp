#include <iostream>
using namespace std;

int main() {
	int h, m, s, times[2] = { 0 }, curTime = 0;
	for (int T = 0; T < 3; ++T) {
		times[0] = times[1] = 0;
		int result = 0;

		for (int N = 0; N < 2; ++N) {
			scanf("%d:%d:%d", &h, &m, &s);

			times[N] = h * 10000 + m * 100 + s;
		}

		if (times[1] < times[0])
			times[1] += 240000;

		curTime = (times[0] / 3) * 3;

		while (curTime <= times[1]) {
			if (curTime < times[0]) {
				curTime++;
				continue;
			}

			if (curTime % 100 == 60) {
				curTime += 40;
			}
			if ((curTime % 10000) / 100 == 60) {
				curTime += 4000;
			}
			
			if (curTime % 3 == 0)
				result++;

			curTime++;
		}

		cout << result << '\n';
	}
}
