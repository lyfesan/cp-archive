#include<bits/stdc++.h>
using namespace std;

int a[1005];

int dp(int n) {
	if(n<0) return 0;
	else if(a[n]!=-1) return a[n];
	else if(n>=0 && n<3) return a[n]=1;
	else {
		a[n]=dp(n-1)+dp(n-3);
		if(a[n]>999999) return a[n]%1000000;
		else return a[n];
	}
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x;
	memset(a,-1,sizeof(a));
	cin>>x;
	cout<<dp(x)<<"\n";
}