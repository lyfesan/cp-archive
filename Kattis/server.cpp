#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t,x,sum=0,cnt=0;
    bool flag = true;
    cin>>n>>t;
    while(n--) {
        cin>>x;
        if((sum + x <= t) && flag==true) {
            cnt++;
            sum+=x;
        }
        else {
            flag = false;
        }
    }
    cout<<cnt<<"\n";
}