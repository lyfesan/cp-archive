#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	int sepatu[1005],bebek[1005],cnt=0;
	cin>>n>>m;
	for(int i=0;i<n;i++) {
		cin>>bebek[i];
	}
	for(int i=0;i<m;i++) {
		cin>>sepatu[i];
	}
	sort(bebek,bebek+n);
	sort(sepatu,sepatu+m);
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(bebek[i]==sepatu[j] || bebek[i]+1==sepatu[j]){
				sepatu[j]=-1;
				cnt++;
				break;
			}
		}
	}
	cout<<cnt<<"\n";
}