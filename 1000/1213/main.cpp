#include <iostream>
#include <string>
using namespace std;
string s, ans;

int alpha[26];

int main() {
    int oddNum = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
        alpha[s[i] - 'A']++;

    for (int i = 0; i < 26; ++i)
        if (alpha[i] % 2 == 1) ++oddNum;

    if (oddNum > 1) {
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    for (int i = 0; i < 26; i++)
        for (int j = 0; j < alpha[i] / 2; j++)
            ans += i + 'A';

    for (int i = 0; i < 26; i++)
        if (alpha[i] % 2)
            ans += i + 'A';

    for (int i = 25; i >= 0; i--)
        for (int j = 0; j < alpha[i] / 2; j++)
            ans += i + 'A';

    cout << ans << '\n';
}
