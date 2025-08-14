#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	while(getline(cin,s)) {
		string st;
		char b;
		for(int i=0;i<s.length();i++) {
			if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z') {
				if(s[i]=='A' || s[i]=='a' || s[i]=='I' || s[i]=='i' || s[i]=='U' || s[i]=='u' || s[i]=='E' || s[i]=='e' || s[i]=='O' || s[i]=='o') {
					while(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' && i<s.length()) {
						st+=s[i];
						i++;
					}
					st+="ay";
					i--;
				}
				else {
					b=s[i];
					i++;
					while(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' && i<s.length()) {
						st+=s[i];
						i++;
					}
					st+=b;
					st+="ay";
					i--;
				}
			}
			else {
				st+=s[i];
			}
		}
		cout<<st<<"\n";
	}
}
