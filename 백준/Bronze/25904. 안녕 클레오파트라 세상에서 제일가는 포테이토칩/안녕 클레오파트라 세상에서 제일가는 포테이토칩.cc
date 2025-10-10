#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X; 
    if(!(cin >> N >> X)) return 0;
    vector<int> T(N);
    for (int i = 0; i < N; ++i) cin >> T[i];
    int turn = 0;
    while (true) {
        int i = turn % N;
        int h = X + turn;
        if (h > T[i]) { cout << i + 1 << "\n"; break; }
        ++turn;
    }
    return 0;
}
