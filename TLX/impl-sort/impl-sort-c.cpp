#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,s=1000001,b=-1;
    vector<int> e(1001,0);
    cin>>n;
    while(n--){
        cin>>x;
        b=max(b,x);
        s=min(s,x);
        e[x]++;
    }
    for(int i=s;i<=b;i++){
        while(e[i]) {
            cout<<i<<"\n";
            e[i]--;
        }
    }
}