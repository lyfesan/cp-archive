#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n;
    string ans;
    while(cin>>n) {
        ans = "";
        if(n<0) break;
        while(n>0) {
            ans += to_string(n%3);
            n/=3;
        }
        reverse(ans.begin(), ans.end());
        cout<<(ans == "" ? "0" : ans) <<"\n";
    }
}