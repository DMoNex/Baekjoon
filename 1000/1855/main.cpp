#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string input;
	string arr[20];

	cin >> N >> input;
	
	int iter = 0, x = 0, y = -1, dy = 1;
	for (int i = 0; i < input.size(); ++i) {
		y += dy;

		if (y == -1 || y == N) {
			y -= dy;
			dy *= -1;
		}

		arr[y].push_back(input[i]);
	}

	for (int i = 0; i < N; ++i)
		cout << arr[i];
}
