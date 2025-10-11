#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		int power=1,cnt=0;
		cin>>n;
		int a[10] = {};
		while(n>0){
			if(n%10>0) {
				a[cnt] = (n%10)*power;
				cnt++;
			}
			n/=10;
			power*=10;
		}
		cout<<cnt<<"\n";
		for(int i=0;i<cnt;i++) cout<<a[i]<<" ";
		cout<<"\n";
	}	
}
		
