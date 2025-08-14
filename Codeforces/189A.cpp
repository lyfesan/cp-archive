#include<bits/stdc++.h>
using namespace std;

int a,b,c,n,dp[5000];

int dpr(int x) {
	if(x==0) return 0;
	else if(x<0) return -1000000;
	else {
		if(dp[x]!=-1) return dp[x];
		else return dp[x]=max(dpr(x-a)+1,max(dpr(x-b)+1,dpr(x-c)+1));
	}
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>a>>b>>c;
	memset(dp,-1,sizeof(dp));
	cout<<dpr(n)<<"\n";;
}