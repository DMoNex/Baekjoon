#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A[100][100] = { 0 };
	int B[100][100] = { 0 };
	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N; ++i) 
		for (int j = 0; j < M; ++j) 
			cin >> A[i][j];
	
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> B[i][j];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j)
			cout << A[i][j] + B[i][j] << ' ';
		cout << '\n';
	}
}
