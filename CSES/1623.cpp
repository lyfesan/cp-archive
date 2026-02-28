#include<bits/stdc++.h>
using namespace std;

long long solve(int i, long long curr, long long total, int n, vector<long long>& p) {
    if (i == n) return abs(total - 2 * curr);

    return min(
        solve(i + 1, curr + p[i], total, n, p), 
        solve(i + 1, curr, total, n, p)
    );
}

int main() {
    int n;
    cin >> n;
    vector<long long> p(n);
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        total += p[i];
    }

    cout << solve(0, 0, total, n, p) << "\n";
}