#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t,n,m;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	cin>>t;
	ll a[n+m+5];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for(int i=n;i<m+n;i++) {
		cin>>a[i];
	}
	sort(a,a+n+m);
	cout<<a[t-1]<<"\n";
}