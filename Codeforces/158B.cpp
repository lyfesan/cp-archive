#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long n,taxi=0,tmp;
	cin>>n;
	int t[5];
	memset(t, 0, sizeof(t));
	for(int i=1;i<=n;i++){
		cin>>tmp;
		t[tmp]++;
	}
	taxi=t[4]+t[3];
	if(t[1]>t[3]) {
		t[1]=t[1]-t[3];
		taxi=taxi+(2*t[2]+t[1]+3)/4;
	}
	else taxi=taxi+(t[2]+1)/2;
	cout<<taxi<<"\n";
}