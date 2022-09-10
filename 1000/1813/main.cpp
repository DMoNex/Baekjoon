#include <iostream>
using namespace std;

int main() {
	int quest[51] = { 0 };
	int N, tmp, i;

	cin >> N;
	while (N--) {
		cin >> tmp;
		quest[tmp]++;
	}
	
	for (i = 50; i >= 0; --i) {
		if (quest[i] == i) {
			cout << i;
			break;
		}
	}

	if (i == -1)
		cout << i;
}
