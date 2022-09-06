#include <iostream>
using namespace std;

int findMaxP(int* people, int N) {
	int pMax = 0, iMax = 0;
	for (int i = 0; i < N; ++i) {
		if (iMax <= people[i]) {
			iMax = people[i];
			pMax = i;
		}
	}
	return pMax;
}

int main() {
	int N, result = 0;
	int people[50] = { 0 };

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> people[i];
		
	int i = 0;
	while ((i = findMaxP(people, N)) != 0) {
		people[i]--;
		people[0]++;
		result++;
	}

	cout << result;
}
