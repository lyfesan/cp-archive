#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b==0) return a;
	else return gcd(b,a%b);
}

int lcm(int a, int b) {
	return (a*b)/gcd(a,b);
}

int main() {
	int n,v;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(i==0) v=a[i];
		else v=lcm(v,a[i]);
	}
	cout<<v<<"\n";
}