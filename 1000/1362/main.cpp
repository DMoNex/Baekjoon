#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int o, w, num, sCount = 1;
	char mode;
	bool flag = false;
	
	while (true) {
		flag = false;

		cin >> o >> w;
		
		if (o == 0 && w == 0)
			break;

		while (true) {
			cin >> mode >> num;

			if (mode == '#' && num == 0) {
				if (flag)
					cout << sCount << " RIP\n";
				else if (w > o / 2 && w < 2 * o)
					cout << sCount << " :-)\n";
				else
					cout << sCount << " :-(\n";

				break;
			}

			if (mode == 'F')
				w += num;
			else if (mode == 'E')
				w -= num;

			if (w <= 0)
				flag = true;
		}
		sCount++;
	}
}
