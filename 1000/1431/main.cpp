#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solve(const string& A, const string& B) {
	if (A.size() != B.size()) return A.size() < B.size();

	int numA = 0, numB = 0;
	for (int i = 0; i < A.size(); ++i) {
		if ('0' <= A[i] && A[i] <= '9')	numA += (A[i] - '0');
		if ('0' <= B[i] && B[i] <= '9')	numB += (B[i] - '0');
	}
	if (numA != numB) return numA < numB;
	
	return A < B;
}

int main() {
	vector<string> arr;
	int N;
	string input;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> input;

		arr.push_back(input);
	}

	sort(arr.begin(), arr.end(), solve);

	for (int i = 0; i < N; ++i) {
		cout << arr.at(i) << endl;
	}
}
