#include <iostream>
using namespace std;

const int MOD = 14579;

int main() {
    int a, b;
    cin >> a >> b;

    long long result = 1;

    for (int i = a; i <= b; i++) {
        long long sum = (long long)i * (i + 1) / 2;
        result = (result * (sum % MOD)) % MOD;
    }

    cout << result << endl;

    return 0;
}
