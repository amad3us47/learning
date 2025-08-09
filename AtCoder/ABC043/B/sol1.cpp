#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, result = "";
    cin >> s;

    for (char c : s) {
        if (c == 'B') {
            if (!result.empty()) {
                result.pop_back(); // simulate backspace
            }
        } else {
            result.push_back(c); // type the character
        }
    }

    cout << result << endl;
    return 0;
}

