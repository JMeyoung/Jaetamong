#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> N;
        if (N < 40) N = 40;
        sum += N;
    }

    cout << sum / 5 << endl;
    return 0;
}
