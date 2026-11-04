#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    stack<string> st;
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="Sleep"){
            cin>>s;
            st.push(s);
        }
        else if(s=="Kick" && !st.empty()) st.pop();
        else if(s=="Test") {
            if(st.empty()) cout<<"Not in a dream\n";
            else cout<<st.top()<<"\n";
        }
    }
}