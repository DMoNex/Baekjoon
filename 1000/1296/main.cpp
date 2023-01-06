#include <iostream>
#include <string>
using namespace std;

int get_score(int L, int O, int V, int E) {
	return ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
}

int main() {
	string name, teamName, result;
	int N, score = -1, tmp;
	int L = 0, O = 0, V = 0, E = 0;
	int L2 = 0, O2 = 0, V2 = 0, E2 = 0;

	cin >> name;

	for (int i = 0; i < name.length(); ++i) {
		if (name[i] == 'L') ++L;
		if (name[i] == 'O') ++O;
		if (name[i] == 'V') ++V;
		if (name[i] == 'E') ++E;
	}

	cin >> N;

	for (int i = 0; i < N; ++i) {
		L2 = 0, O2 = 0, V2 = 0, E2 = 0;

		cin >> teamName;
		
		for (int j = 0; j < teamName.length(); ++j) {
			if (teamName[j] == 'L') ++L2;
			if (teamName[j] == 'O') ++O2;
			if (teamName[j] == 'V') ++V2;
			if (teamName[j] == 'E') ++E2;
		}

		tmp = get_score(L + L2, O + O2, V + V2, E + E2);

		if (tmp > score) {
			score = tmp;
			result = teamName;
		}
		else if (tmp == score && teamName < result) result = teamName;
	}

	cout << result;
}
