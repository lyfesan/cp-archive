#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
	bool y=true;
    cin>>s;
    n=s.length();
    for(int i=0;i<s.length();i++) {
        if(s[i]=='0') {
            s.erase(s.begin()+i);
            y=false;
            break;
        }
    }
	if(y) s.erase(s.begin());
    cout<<s<<"\n";
}
