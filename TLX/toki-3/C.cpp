#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='_') {
            s.erase(i,1);
            s[i]=toupper(s[i]);
        }
        else if(isupper(s[i])){
            s.insert(i,"_");
            s[i+1]=tolower(s[i+1]);
        }
    }
    cout<<s<<"\n";
}