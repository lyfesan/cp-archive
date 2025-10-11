#include<bits/stdc++.h>
using namespace std;

int f(int n, int a, int b, int c) {
    if(n==0) return a;
    return f(n-1,a,b,c) + b*n + c;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,c;
    cin>>a>>b>>c>>n;
    cout<<f(n,a,b,c)<<"\n";
}