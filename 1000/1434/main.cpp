#include <iostream>
using namespace std;

int main() {
	int N, M, sumN = 0, sumM = 0, tmp;

	cin >> N >> M;
	while (N--) {
		cin >> tmp;
		sumN += tmp;
	}
	while (M--) {
		cin >> tmp;
		sumM += tmp;
	}
	cout << sumN - sumM;
}
