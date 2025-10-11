#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	double total=0;
	int k,x;
	cin>>k;
	for (int i=0;i<k;i++) {
		cin>>x;
		total+=x;
	}
	cout<<setprecision(5)<<total/(double)k;
}
