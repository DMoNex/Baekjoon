#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;

	while (true) {
		stack<int> st;

		getline(cin, str);
		
		if (str == ".") return 0;

		for (int i = 0; i < str.length(); ++i) {
			if (str[i] == '(') st.push('(');
			else if (str[i] == '[') st.push('[');
			else if ((str[i] == ')' || str[i] == ']') && st.empty()) {
				cout << "no\n";
				break;
			}
			else if ((str[i] == ')' && st.top() == '(') || (str[i] == ']' && st.top() == '[')) st.pop();
			else if ((str[i] == ')' && st.top() != '(') || (str[i] == ']' && st.top() != '[')) {
				cout << "no\n";
				break;
			}
			else if (str[i] == '.' && st.empty()) {
				cout << "yes\n";
				break;
			}
			else if (str[i] == '.' && !st.empty()) {
				cout << "no\n";
				break;
			}
		}
	}
}
