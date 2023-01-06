#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> setA;
	int sizeA, sizeB;
	int tmp;

	cin >> sizeA >> sizeB;
	
	for (int i = 0; i < sizeA; ++i) {
		cin >> tmp;
		setA.insert(tmp);
	}
	for (int i = 0; i < sizeB; ++i) {
		cin >> tmp;
		if (setA.count(tmp)) {
			setA.erase(tmp);
		}
		else {
			setA.insert(tmp);
		}
	}
	
	cout << setA.size();
}
