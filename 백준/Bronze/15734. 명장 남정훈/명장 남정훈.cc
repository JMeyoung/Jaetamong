#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int L, R, A;
    cin >> L >> R >> A;
    int balanced = min( min(L + A, R + A), (L + R + A) / 2 );
    cout << balanced * 2 << "\n";
    return 0;
}
