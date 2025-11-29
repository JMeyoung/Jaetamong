#include <iostream>
using namespace std;

int main() {
    int n, C;
    cin >> n >> C;

    int p, d, v;
    int answer = 1e9;

    for(int i = 0; i < n; i++) {
        cin >> p >> d >> v;
        int cost = p + d + C * v;
        if(cost < answer) answer = cost;
    }

    cout << answer << endl;
    return 0;
}
