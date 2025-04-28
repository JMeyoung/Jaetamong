#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B, C, D;
    cin >> A >> B >> C >> D;

    long long AB = stoll(A + B);
    long long CD = stoll(C + D);

    cout << (AB + CD) << "\n";
    return 0;
}
