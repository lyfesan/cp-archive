#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,h,k,d;
    cin>>n>>m;
    vector<long long> dp(m+1,0);
    while(n--){
        cin>>h>>k>>d;
        if(d){
            for(int w=m;w>=h;w--){
                dp[w] = max(dp[w], dp[w-h]+k);
            }
        }
        else {
            for(int w=h;w<=m;w++){
                dp[w] = max(dp[w], dp[w-h]+k);
            }
        }
    }
    cout<<dp[m]<<"\n";
}