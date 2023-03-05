#include <iostream>
using namespace std;

int main() {
	int cur, next;
	char cmd;

	while (true) {
		cin >> cur >> cmd >> next;
		
		if (cur == 0 && cmd == 'W' && next == 0) break;

		switch (cmd) {
		case 'W':
			if (cur - next < -200)
				cout << "Not allowed\n";
			else
				cout << cur - next << '\n';
			break;
		case 'D':
			cout << cur + next << '\n';
			break;
		}
	}
}
