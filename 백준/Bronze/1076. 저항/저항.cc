#include <iostream>
#include <string>
using namespace std;

int getValue(string color) {
    if (color == "black") return 0;
    if (color == "brown") return 1;
    if (color == "red") return 2;
    if (color == "orange") return 3;
    if (color == "yellow") return 4;
    if (color == "green") return 5;
    if (color == "blue") return 6;
    if (color == "violet") return 7;
    if (color == "grey") return 8;
    if (color == "white") return 9;
    return -1;
}

int main() {
    string color1, color2, color3;
    cin >> color1 >> color2 >> color3;

    int first = getValue(color1);
    int second = getValue(color2);
    int multiplier = getValue(color3);

    long long result = (first * 10 + second);
    for (int i = 0; i < multiplier; i++) result *= 10;

    cout << result << endl;

    return 0;
}
