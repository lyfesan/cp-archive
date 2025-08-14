#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	bool y;
	int t, c1, c2, c3, a1, a2, a3, a4, a5;
	cin>>t;
	for(int rr=0;rr<t;rr++) {
		cin>>c1>>c2>>c3;
		cin>>a1>>a2>>a3>>a4>>a5;
		y=false;
		if(c1>=a1 && c2>=a2 && c3>=a3) {
			c1-=a1;
			c2-=a2;
			c3-=a3;
			a1-=a1;
			a2-=a2;
			a3-=a3;
			if(a4!=0) {
				if(c1>=a4) {
					c1-=a4;
					a4-=a4;
				}
				else {
					a4-=c1;
					c1-=c1;
				}
				if(c3>=a4) {
					c3-=a4;
					a4-=a4;
				}
			}
			if(a5!=0) {
				if(c2>=a5) {
					c2-=a5;
					a5-=a5;
				}
				else {
					a5-=c2;
					c2-=c2;
				}
				if(c3>=a5) {
					c3-=a5;
					a5-=a5;
				}
			}
			if(a1==0 && a2==0 && a3==0 && a4==0 && a5==0) {
				y=true;
			}
		}
		else y=false;

		if(y) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}
