#include<bits/stdc++.h>
using namespace std;

bool cari(string ss, string s, int a) {
	int k=ss.length()-1;
	if(a==0) {
		for(int i=0;i<s.length();i++) {
			if(s[i]!=ss[i]) return 0;
		}
	}
	else if(a==1) {
		for(int i=s.length()-1;i>=0;i--) {
			if(s[i]!=ss[k]) return 0;
			k--;
		}
	}
	return 1;
}

int main() {
	string s,s1,s2,st;
	bool y=true;
	int n,pos=0;
	cin>>s;
	if(s=="*") s1="*";
	else {
		for(int i=0;i<s.length();i++) {
			if(s[i]=='*'){
				y=false;
				pos=i;
				continue;
			}
			if(y) s1+=s[i];
			else s2+=s[i];
		}
	}
	cin>>n;
	while(n--) {
		cin>>st;
		if(y) cout<<st<<"\n";
		else if(st.length()<s.length()-1) continue;
		else {
			if(pos==0) {
				if(cari(st,s2,1)) cout<<st<<"\n";
			}
			else if(pos==s.length()-1) {
				if(cari(st,s1,0)) cout<<st<<"\n";
			}
			else {
				if(cari(st,s1,0) && cari(st,s2,1)) cout<<st<<"\n";
			}
		}
	}
}