#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    vector<ll> appl(n);
    vector<ll> apart(m);
    for(ll i=0;i<n;i++) cin>>appl[i];
    for(ll i=0;i<m;i++) cin>>apart[i];
    sort(appl.begin(),appl.end());
    sort(apart.begin(),apart.end());
    ll i=0,j=0;
    while(i<n && j<m){
        if(abs(appl[i]-apart[j])<=k) {
            ans++;
            i++;
            j++;
        }
        else if(appl[i]<apart[j]) i++;
        else j++;
    }
    cout<<ans<<"\n";
}