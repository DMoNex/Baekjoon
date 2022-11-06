#include <iostream>
using namespace std;

int main() {
	bool seat[100] = { 0 };
	int N, count = 0, tmp;
	cin >> N;
	while (N--) {
		cin >> tmp;
		if (seat[tmp - 1] == false)
			seat[tmp - 1] = true;
		else
			count++;
	}
	cout << count;
}
