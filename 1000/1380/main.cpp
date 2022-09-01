#include <iostream>
#include <string>
#include <memory.h>
using namespace std;

int main() {
	int T, scenario = 0, tmp;
	string studentName[100];
	int studentFlag[100] = { 0 };
	char discard;

	while (true) {
		cin >> T;

		if (T == 0) return 0;
		scenario++;
		memset(studentFlag, 0, sizeof(studentFlag));

		getline(cin, studentName[0]);
		for (int i = 0; i < T; ++i)
			getline(cin, studentName[i]);
		for (int i = 0; i < 2 * T - 1; ++i) {
			cin >> tmp >> discard;
			studentFlag[tmp - 1]++;
		}
		
		for (int i = 0; i < T; ++i) {
			if(studentFlag[i] == 1)
				cout << scenario << ' ' << studentName[i] << '\n';
		}
	}
}
