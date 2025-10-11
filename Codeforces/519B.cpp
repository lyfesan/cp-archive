#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long a=0,b=0,c=0,n,r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>r;
		a+=r;
	}
	for(int i=0;i<n-1;i++){
		cin>>r;
		b+=r;
	}
	for(int i=0;i<n-2;i++){
		cin>>r;
		c+=r;
	}
	cout<<a-b<<"\n"<<b-c<<"\n";
}