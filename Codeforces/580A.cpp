#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,cnt,total;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cnt=1;
	total=cnt;
	for(int i=0;i<n-1;i++) {
		if(a[i]<=a[i+1]) {
			cnt++;
			total=max(total,cnt);
		}
		else cnt=1;
	}
	cout<<total<<"\n";
}
