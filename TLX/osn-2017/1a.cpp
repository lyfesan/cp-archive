#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,sd,sm,total=0;
	bool y=true;
	priority_queue<ll> pq;
	string s;
	cin>>s;
	cin>>n>>sd>>sm;
	ll p[n+10],k[n+10],l[n+10];
	for(ll i=0;i<n-1;i++) {
		cin>>p[i]>>k[i]>>l[i];
		total+=k[i];
	}
	for(ll i=0;i<n-1;i++) {
		while(sd<p[i]) {
			if(pq.empty()){
				y=false;
				break;
			}
			sd++;
			total-=pq.top();
			pq.pop();
		}
		if(l[i]<=k[i]) {
			total-=(k[i]-l[i]);
			sd++;
		}
		else {
			pq.push(k[i]-l[i]);
		}
	}
	while(sd<sm) {
		if(pq.empty()){
			y=false;
			break;
		}
		sd++;
		total-=pq.top();
		pq.pop();
	}
	if(sd<sm || !y) cout<<-1<<"\n";
	else cout<<total<<"\n";
}