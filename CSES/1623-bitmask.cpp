#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> p(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        total += p[i];
    }

    long long mins = total;

    for (int bit = 0; bit < (1 << n); bit++) {
        long long curr = 0;
        for (int i = 0; i < n; i++) {
            if ((bit >> i) & 1) {
                curr += p[i];
            }
        }
        long long diff = abs(total - 2 * curr);
        mins = min(mins, diff);
    }

    cout << mins << "\n";
}