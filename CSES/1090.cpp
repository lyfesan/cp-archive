#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=2e5+5;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,x,ans=0,i,j;
    cin>>n>>x;
    vector<ll> a(n);
    vector<bool> y(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    i=0;j=n-1;
    while(i<j){
        if(a[i]+a[j]<=x){
            ans++;
            y[i]=y[j]=1;
            i++;
            j--;
        }
        else j--;
    }
    for(int i=0;i<n;i++) if(!y[i]) ans++;
    cout<<ans<<"\n";
}