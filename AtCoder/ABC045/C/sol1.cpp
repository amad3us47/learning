// bit masking 
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.size();
    long long total = 0;

    // Iterate over all combinations of placing '+' or not
    for (int bit = 0; bit < (1 << (n - 1)); ++bit) {
        long long sum = 0;
        long long current = S[0] - '0';

        for (int i = 0; i < n - 1; ++i) {
            if (bit & (1 << i)) {
                // Insert '+': add current to sum, and start a new number
                sum += current;
                current = S[i + 1] - '0';
            } else {
                // Don't insert '+': keep building the current number
                current = current * 10 + (S[i + 1] - '0');
            }
        }

        // Add the final number segment
        sum += current;
        total += sum;
    }

    cout << total << endl;
    return 0;
}

