#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int N, tmp, cur = 1;
	stack<int> st;
	vector<char> result;

	cin >> N;
	while (N--) {
		cin >> tmp;
		
		while (tmp >= cur) {
			st.push(cur++);
			result.push_back('+');
		}
		if (st.top() == tmp) {
			st.pop();
			result.push_back('-');
		}
		else if (st.top() > tmp) {
			cout << "NO\n";
			return 0;
		}
	}

	for (int i = 0; i < result.size(); ++i)
		cout << result[i] << '\n';
}
