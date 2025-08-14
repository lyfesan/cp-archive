#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long maks=-1,x,n,cnt[100009],dp[100009];
	cin>>n;
	memset(cnt,0,sizeof(cnt));
	for(int i=0;i<n;i++) {
		cin>>x;
		cnt[x]++;
		maks=max(maks,x);
	}
	dp[0]=0;
	dp[1]=cnt[1];
	for(int i=2;i<=maks;i++) {
		dp[i]=max(dp[i-1],(dp[i-2]+(i*cnt[i])));
	}
	cout<<dp[maks]<<"\n";
}