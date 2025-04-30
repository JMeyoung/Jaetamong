#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;
    double price;
    while (T--) {
        cin >> price;
        double discounted = price * 0.8;
        cout << '$' << fixed << setprecision(2) << discounted << '\n';
    }
    return 0;
}
