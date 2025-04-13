#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') {
            count++;
            while (i < str.size() && str[i] != ' ') i++;
        }
    }

    cout << count << endl;
    return 0;
}
