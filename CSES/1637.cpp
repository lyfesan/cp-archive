#include<bits/stdc++.h>
using namespace std;

// Bottom Up DP
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1, 1e7);
    dp[0]=0;
    for(int i=0;i<=n;i++){
        for(char c : to_string(i)) {
            dp[i] = min(dp[i], dp[i-(c-'0')]+1);
        }
    }
    cout<<dp[n]<<"\n";
}

// Greedy Approach
// int main() {
//     int n,ans=0,x,md;
//     cin>>n;
//     while(n>0){
//         md=0,x=n;
//         while(x>0){
//             md = max(md,x%10);
//             x/=10;
//         }
//         n-=md;
//         ans++;
//     }
//     cout<<ans<<"\n";
// }
