#include<bits/stdc++.h>
using namespace std;

int *reverseArray(int a[], int n) {
    //int rev[n+5];
    int *rev = new int[n+5];
    for(int i=n; i>=0; i--) {
        rev[n-i-1] = a[i];
    }
    return rev;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++) cin>>a[i];
    int *res = reverseArray(a, n);
    for(int i=0; i<n; i++) cout<<res[i]<<" ";
    cout<<"\n";
}