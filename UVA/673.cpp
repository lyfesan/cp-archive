#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    stack<char> st;
    string s;
    cin>>n;
    cin.ignore();
    while(n--){
        st = {};
        s = "";
        getline(cin,s);
        for(char c : s) {
            if(c=='(' || c=='[') st.push(c);
            else if(c==')' || c==']') {
                if(st.empty() || (c==')' && st.top()!='(') || (c==']' && st.top()!='[')) {
                    st.push('a');
                    break;
                }
                else st.pop();
            }
        }
        if(st.empty()) cout<<"Yes\n";
        else cout<<"No\n";
    }
}