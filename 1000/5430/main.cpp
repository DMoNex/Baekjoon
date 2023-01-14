#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	int T, N;
	string inputF;
    deque<int> arr;
    
	cin >> T;
	while (T--) {
		string input, tmp;
        bool isReversed = false, error = false;
        arr.clear();

        cin >> inputF >> N >> input;
        for (int i = 0; i < input.size(); ++i) {
            if ('0' <= input[i] && input[i] <= '9')
                tmp += input[i];
            else {
                if (!tmp.empty()) {
                    arr.push_back(stoi(tmp));
                    tmp.clear();
                }
            }
        }

        for (int i = 0; i < inputF.size(); ++i) {
            switch (inputF[i]) {
            case 'R':
                isReversed = !isReversed;
                break;
            case 'D':
                if (!arr.empty()) {
                    if (isReversed)
                        arr.pop_back();
                    else
                        arr.pop_front();
                }
                else {
                    cout << "error\n";
                    error = true;
                }
                break;
            }

            if (error)
                break;;
        }

        if (error)
            continue;
        else {
            cout << '[';
            if (!isReversed) {
                for (int i = 0; i < arr.size(); ++i) {
                    cout << arr[i];

                    if (i != arr.size() - 1)
                        cout << ',';
                }
            }
            else {
                for (int i = arr.size() - 1; i >= 0; --i) {
                    cout << arr[i];

                    if (i != 0)
                        cout << ',';
                }
            }
            cout << "]\n";
        }
	}
}
