#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int nums[3] = {A, B, C};
    int maxOdd = 0;
    int maxEven = 0;

    for (int i = 1; i < 8; i++) { 
        int product = 1;
        for (int j = 0; j < 3; j++) {
            if (i & (1 << j)) {
                product *= nums[j];
            }
        }

        if (product % 2 == 1) {
            maxOdd = max(maxOdd, product);
        } else {
            maxEven = max(maxEven, product);
        }
    }

    if (maxOdd > 0) cout << maxOdd << endl;
    else cout << maxEven << endl;

    return 0;
}