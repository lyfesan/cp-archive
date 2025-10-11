#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,x;
    cin>>n>>x;
    string res="";
    while(n>0){
        res+=to_string(n%x);
        n/=x;
    }
    reverse(res.begin(),res.end());
    cout<<res<<"\n";
}