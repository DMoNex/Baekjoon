#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, P, score, i;
    
    cin >> N >> score >> P;
    vector<int> ranking(N);
    for(i = 0; i < N; ++i)
        cin >> ranking[i];
    
    
    for(i = 0; i < N; ++i) {
        if(score > ranking[i]) {
            cout << i + 1;
            return 0;
        }
        if(score == ranking[i]) {
            int j = i;
            
            while(j < N) {
                if(ranking[j] < score) {
                    cout << i + 1;
                    return 0;
                }
                
                ++j;
            }
            
            if(j == N) {
                if(P <= N)
                    cout << -1;
                else
                    cout << i + 1;
                return 0;
            }
        }
    }
    
    if(P <= N)
        cout << -1;
    else
        cout << i + 1;
}
