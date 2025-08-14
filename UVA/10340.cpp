#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int y;

int main() {
	while(cin>>s1>>s2) {
		y=0;
		for(int i=0;i<s2.length();i++) {
			if(y==s1.length()) break;
			if(s1[y]==s2[i]) {
				y++;
			}
		}
		if(y==s1.length()) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
