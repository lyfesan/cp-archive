#include<bits/stdc++.h>
using namespace std;

long long sum(int *arr, int n){
    if(n<=0) return 0;
    return arr[n-1]+sum(arr,n-1);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Case "<<i<<": "<<sum(arr,n)<<"\n";
    }
}