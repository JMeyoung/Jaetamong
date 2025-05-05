#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> targets = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;

    for (char c : s ) {
        if (targets.count(c))
            count++;
    }

    cout << count << endl;
    
    return 0;
}
