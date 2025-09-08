#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long bS, bC, bO, bN;
    if (!(cin >> bS >> bC >> bO >> bN)) return 0;
    long long k1 = (bS + bN) / 3;
    long long k2 = (bC + 2*bO) / 6;
    cout << min(k1, k2) << '\n';
    return 0;
}