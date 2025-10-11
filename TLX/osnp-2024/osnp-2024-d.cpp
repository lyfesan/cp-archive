#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long b,n;
    string y;
    cin>>b>>y;
    n = y.length();
    long long dp[n+5] = {0};
    dp[0] = 1;

    for (int i=0; i<n; i++) {
        if (dp[i]==0) continue;
        if (y[i]=='0') {
            if (i+1 <= n) {
                dp[i+1] = (dp[i+1] + dp[i]) % MOD;
            }
            continue;
        }
        long long val = 0;
        for (int j=1; i+j<=n; j++) {
            val = val * 10 + (y[i+j-1]-'0');
            if (val >= b) break; 
            dp[i + j] = (dp[i + j] + dp[i]) % MOD;
        }
    }
    cout<<dp[n]<<"\n";
}