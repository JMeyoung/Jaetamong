#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int freq[26] = {0};

    for (char c : str) {
        if (isalpha(c)) {
            c = tolower(c);
            freq[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << freq[i] << " ";
    }

    cout << endl;
    return 0;
}
