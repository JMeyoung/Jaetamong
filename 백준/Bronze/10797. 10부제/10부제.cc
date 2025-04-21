#include <iostream>
using namespace std;

int main() {
    int day, x, count = 0;
    cin >> day;

    for (int i = 0; i < 5; i++) {
        cin >> x;
        if (x == day) count++;
    }

    cout << count << endl;
    return 0;
}
