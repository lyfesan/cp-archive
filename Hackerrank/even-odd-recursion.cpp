#include<bits/stdc++.h>
using namespace std;

int F(int n){
    if(n==0) return 1;
    if(n%2==0) return F(n/2) + 3;
    return F(n-1) + 4;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<F(n)<<"\n";
    }
}