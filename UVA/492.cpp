#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
	c=toupper(c);
	return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	while(getline(cin,s)) {
		string st;
		char b;
		for(int i=0;i<s.length();i++) {
			if(isalpha(s[i])) {
				if(isVowel(s[i])) {
					while(isalpha(s[i]) && i<s.length()) {
						st+=s[i];
						i++;
					}
					st+="ay";
					i--;
				}
				else {
					b=s[i];
					i++;
					while(isalpha(s[i]) && i<s.length()) {
						st+=s[i];
						i++;
					}
					st+=b;
					st+="ay";
					i--;
				}
			}
			else st+=s[i];
		}
		cout<<st<<"\n";
	}
}
