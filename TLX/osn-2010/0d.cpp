#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
	return (a+((b-a)/2));
}

int main() {
	int a,b,mid;
	string s;
	cin>>a>>b;
	mid=solve(a,b);
	cout<<mid<<"\n";;
	while(true) {
		getline(cin,s);
		if(s=="selamat") break;
		else if(s=="terlalu kecil") {
			a=mid;
			if(b-a==1) mid=b;
			else mid=solve(a,b);
			cout<<mid<<"\n";;
		}
		else if(s=="terlalu besar") {
			b=mid;
			if(b-a==1) mid=a;
			else mid=solve(a,b);
			cout<<mid<<"\n";
		}
		fflush(stdout);
	}
}