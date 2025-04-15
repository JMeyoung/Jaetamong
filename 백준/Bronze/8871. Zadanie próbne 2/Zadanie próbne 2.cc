#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minProblems = n * 2 + 2;
    int maxProblems = n * 3 + 3;

    cout << minProblems << " " << maxProblems << endl;

    return 0;
}
