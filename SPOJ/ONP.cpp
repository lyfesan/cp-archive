#include<bits/stdc++.h>
using namespace std;

int degree(char x){
    if(x=='^') return 3;
    if(x=='*' || x=='/') return 2;
    if(x=='+' || x=='-') return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    stack<char> st;
    string s;
    cin>>t;
    while(t--){
        st = {};
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z') cout<<s[i];
            else if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && degree(st.top())>=degree(s[i])){
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<"\n";
    }
}