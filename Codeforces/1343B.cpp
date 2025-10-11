#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x,n,t;
	cin>>n;
	while(n--){
		cin>>x;
        x/=2;
		if(x & 1) cout<<"NO\n"; 
		else {
            cout<<"YES\n";
			for(int i=1;i<=x;i++){
				cout<<i*2<<" ";
			}
			for(int i=1;i<x;i++){
				cout<<i*2-1<<" ";
			}
			cout<<3*x-1<<"\n";
        }
	}
}