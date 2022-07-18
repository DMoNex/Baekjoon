#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tmp;
	bool check[30] = { 0 };
	
	for (int i = 0; i < 28; ++i) {
		cin >> tmp;
		check[tmp - 1] = true;
	}

	for (int i = 0; i < 30; ++i)
		if (check[i] != true)
			cout << i + 1 << '\n';
}
