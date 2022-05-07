#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N, T = 1;

	while (true) {
		cin >> N;

		if (N == 0) return 0;

		string name[20];
		bool check[20][20] = { 0 };
		char tmp;

		memset(check, true, sizeof(check));

		for (int i = 0; i < N; ++i) {
			cin >> name[i];
			for (int j = 0; j < N - 1; ++j) {
				cin >> tmp;
				if (tmp == 'N') check[i][j] = false;
			}
		}

		bool flag = false;
		cout << "Group " << T++ << '\n';
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N - 1; ++j) {
				if (check[i][j] == false) {
					cout << name[(i + (N - 1 - j)) % N] << " was nasty about " << name[i] << '\n';
					flag = true;
				}
			}
		}
		 
		if (flag == false) cout << "Nobody was nasty\n";

		cout << endl;
	}
}
