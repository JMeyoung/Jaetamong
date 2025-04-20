#include <iostream>
using namespace std;

int main() {
    int K, N, M;

    int total = 0;

    cin >> K >> N >> M;

    total = K * N;

    if (total <= M) {
        cout << "0";
    }
    else 
        cout << total - M;
    return 0;
}
