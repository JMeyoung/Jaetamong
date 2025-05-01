#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pos[26];
    for (int i = 0; i < 26; i++) pos[i] = -1;
    for (int i = 0; i < (int)s.size(); i++) {
        int idx = s[i] - 'a';
        if (pos[idx] == -1) pos[idx] = i;
    }
    for (int i = 0; i < 26; i++) {
        cout << pos[i] << (i + 1 < 26 ? ' ' : '\n');
    }
    return 0;
}
