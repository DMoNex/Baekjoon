#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string arr[30];
	string tmp;
	bool alpha[26] = { 0 };

	cin >> N;

	for (int i = 0; i < N; ++i) {
		int iter = 0;
		char head = 0;
		bool flag = false;
		tmp = "";

		while (tmp == "") {
			getline(cin, tmp);
		}

		head = tmp[0];

		while (iter != string::npos) {

			if (islower(head) && alpha[head - 'a'] != true) {
				tmp.insert(iter, "[");
				tmp.insert(iter + 2 , "]");
				alpha[head - 'a'] = true;
				flag = true;
				break;
			}
			else if (head >= 'A' && head <= 'Z' && alpha[head - 'A'] != true) {
				tmp.insert(iter, "[");
				tmp.insert(iter + 2, "]");
				alpha[head - 'A'] = true;
				flag = true;
				break;
			}
			
			iter = tmp.find(' ', iter);
			if (iter != string::npos) {
				++iter;
				head = tmp[iter];
			}
		}

		if (flag != true) {
			for (int j = 0; j < tmp.size(); ++j) {
				if (isupper(tmp[j]) && alpha[tmp[j] - 'A'] != true) {
					alpha[tmp[j] - 'A'] = true;
					tmp.insert(j, "[");
					tmp.insert(j + 2 , "]");
					flag = true;
					break;
				}
				else if (islower(tmp[j]) && alpha[tmp[j] - 'a'] != true) {
					alpha[tmp[j] - 'a'] = true;
					tmp.insert(j, "[");
					tmp.insert(j + 2 , "]");
					flag = true;
					break;
				}
			}
		}

		arr[i] = tmp;
	}

	for (int i = 0; i < N; ++i) {
		cout << arr[i] << endl;
	}
}
