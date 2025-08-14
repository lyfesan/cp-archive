#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
	cin>>n;
	int a[n+5],odd=0,even=0,ieven,iodd;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(a[i]%2==0 && a[i]!=1) {
			even++;
			ieven=i;
		}
		else {
			odd++;
			iodd=i;
		}
	}
	if(even>odd) cout<<iodd<<"\n";
	else cout<<ieven<<"\n";
}