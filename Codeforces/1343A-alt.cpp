#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long n,t;
    cin>>t;
    while(t--){
        cin>>n;
        for(long i=2;i<30;i++){
            long long tmp = (1L<<i)-1;
            if(n%tmp==0){
                cout<<n/tmp<<"\n";
                break;
            }
        }
    }
}