#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k,res;
	bool t=false;
	cin>>n>>m>>k;
	int a[n+5][m+5],x=10000,y=10000;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			res=1;
			if(i+1<n) res*=a[i+1][j];
			if(j+1<m) res*=a[i][j+1];
			if(i-1>=0) res*=a[i-1][j];
			if(j-1>=0) res*=a[i][j-1];
			if(res==k) {
				t=true;
				if(j<y){
					x=i;
					y=j;
				}
			}
		}
	}
	if(t) cout<<x+1<<" "<<y+1<<"\n";
	else cout<<"0 0\n";
}