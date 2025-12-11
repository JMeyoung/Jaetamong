#include <iostream>
#include <string>

using namespace std;

string divideLargeNumberByA(string num, long long a) {
    string result = "";
    long long temp = 0;

    for (char ch : num) {
        temp = temp * 10 + (ch - '0');
        if (temp >= a) {
            result += (temp / a) + '0';
            temp %= a;
        } else if (!result.empty()) {
            result += '0';
        }
    }

    if (result.empty()) result = "0";
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a;
    string b, c;
    cin >> a >> b >> c;

    string diff = "";
    int carry = 0;

    int b_len = b.size(), c_len = c.size();
    int max_len = max(b_len, c_len);

    for (int i = 0; i < max_len; i++) {
        int b_digit = i < b_len ? b[b_len - 1 - i] - '0' : 0;
        int c_digit = i < c_len ? c[c_len - 1 - i] - '0' : 0;

        int sub = b_digit - c_digit - carry;
        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }

        diff = char(sub + '0') + diff;
    }

    string result = divideLargeNumberByA(diff, a);
    cout << result << endl;

    return 0;
}
