#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	int T;
	bool flag;

	cin >> T;
	getline(cin, str);

	while (T--) {
		stack<char> st;
		flag = true;

		getline(cin, str);

		for (int i = 0; i < str.length(); ++i) {
			if (str[i] == '(') st.push('(');
			else if (!st.empty() && str[i] == ')' && st.top() == '(') st.pop();
			else if (st. empty() && str[i] == ')') {
				flag = false;
				break;
			}
		}

		if (st.empty() && flag) cout << "YES\n";
		else cout << "NO\n";
	}
}
