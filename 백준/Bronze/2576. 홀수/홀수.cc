#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int min_value = 100;
    int num;

    for (int i = 0; i < 7; i++) {
        cin >> num;
        if (num % 2 == 1) {
            sum += num;
            if (num < min_value) min_value = num;
        }
    }

    if (sum == 0) cout << -1 << endl;
    else {
        cout << sum << endl;
        cout << min_value << endl;
    }

    return 0;
}
