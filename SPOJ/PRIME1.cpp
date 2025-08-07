#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	long long n,m;
	bool y;
	cin>>t;
	for(int rr=0;rr<t;rr++) {
		cin>>n>>m;
		for(long long i=n;i<=m;i++) {
			if(i>=2) {
				y=true;
				for(int j=2;j*j<=i;j++) {
					if(i%j==0) {
						y=false;
						break;
					}
				}
				if(y) cout<<i<<"\n";
			}	
		}
		cout<<"\n";
	}
}