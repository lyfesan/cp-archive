#include<bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y) {
    if(y==0) return x;
	else return gcd(y,x%y);
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, k, a, mod,cnt=0;
    cin>>n>>k>>a;
    mod=a%n;
    long long root[n];
    memset(root, 0, sizeof(root));
    for(int i=0;int(pow(i,k))<n;i++) {
            if(int(pow(i,k))%n==mod && gcd(n,i)==1) {
                    root[cnt]=i;
                    cnt++;
            }
    }
	cout<<cnt<<"\n";
    for(int i=0;i<cnt;i++) {
        if(root[i]!=0) {
            cout<<root[i]<<"\n";
        }
    }
}
