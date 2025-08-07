#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull revbits(ull n) {
	ull r=0;
	while(n>0) {
		r<<=1;
		if(n&1==1) {
			r^=1;
		}
		n>>=1;
	}
	return r;
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ull n;
	cin>>n;
	cout<<revbits(n)<<"\n";
}
