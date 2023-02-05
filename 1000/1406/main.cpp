#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int M;
	char cmd;
	stack<char> left, right;
	string input;

	cin >> input >> M;
	for (int i = 0; i < input.size(); ++i)
		left.push(input[i]);
	
	while (M--) {
		cin >> cmd;

		switch (cmd) {
			case 'L':
				if (!left.empty()) {
					right.push(left.top());
					left.pop();
				}
				break;
			case 'D':
				if (!right.empty()) {
					left.push(right.top());
					right.pop();
				}
				break;
			case 'B':
				if (!left.empty())
					left.pop();
				break;
			case 'P':
				cin >> cmd;
				left.push(cmd);
				break;
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
}
