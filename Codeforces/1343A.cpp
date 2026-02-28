#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t,n;
	cin>>t;
	for(;t>0;t--) {
		cin>>n;
		for(int k=2;k<30;k++){
			long long tmp=(1<<k)-1;
			if(n%tmp==0){cout<<n/tmp<<"\n"; break;}
		}
	}
}