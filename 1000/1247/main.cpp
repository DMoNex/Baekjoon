#include <iostream>
#include <climits>
using namespace std;

int main() {
	long long sum, N, T = 3, num, limit;
	int flowCount = 0;

	while (T--) {
		sum = 0;
		flowCount = 0;
		cin >> N;
		while (N--) {
			cin >> num;
			
			if (sum > 0)
				limit = LLONG_MAX - sum;
			else
				limit = LLONG_MIN - sum;
			
			if (sum > 0 && num > 0 && num > limit)
				flowCount++;
			else if (sum < 0 && num < 0 && num < limit)
				flowCount--;

			sum += num;
		}
		
		if (flowCount < 0)
			cout << "-\n";
		else if (flowCount > 0) 
			cout << "+\n";
		else if (sum == 0)
			cout << "0\n";
		else if (sum > 0)
			cout << "+\n";
		else if (sum < 0)
			cout << "-\n";
	}
}
