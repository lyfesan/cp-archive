#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,diff;
    bool y;
    cin>>t;
    while(t--){
        cin>>n;
        y=1;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(i==1) diff=a[i]-a[i-1];
            else if(i>1 && a[i]-a[i-1]!=diff) y=0;
        }
        if(y) cout<<"arithmetic\n";
        else{
            sort(a.begin(),a.end());
            diff=a[1]-a[0];
            y=1;
            for(int i=2;i<n;i++) {
                if(a[i]-a[i-1]!=diff) y=0;
            }
            if(y) cout<<"permuted arithmetic\n";
            else cout<<"non-arithmetic\n";
        }
    }
}