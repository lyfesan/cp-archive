#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n,a,b,c,mins,maxs;
	cin>>t;
	while(t--) {
		cin>>n;
		mins=0;maxs=0;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b>>c;
			mins+=min(a,min(b,c));
			maxs+=max(a,max(b,c));
		}
		cout<<mins<<" "<<maxs<<"\n";
	}
}