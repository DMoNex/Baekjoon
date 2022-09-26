#include <iostream>
using namespace std;

int main() {
	int N, count = 0, result = 0;
	cin >> N;
	
	while (N) {
		count++;
		
		if (N >= count) {
			result++;
			N -= count;
		}
		else {
			count = 0;
		}
	}

	cout << result;
}
