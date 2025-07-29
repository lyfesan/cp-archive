#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n,k,x;
    cin>>n>>k;
    int patok[n+5];
    patok[0]=0;
    for(int i=1;i<=n;i++) {
        cin>>patok[i];
        patok[i]+=patok[i-1];
    }
    for(int i=0;i<k;i++) {
        int l = 0, r = n, ans = patok[0];
        cin>>x;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (x >= patok[mid]) {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout<<ans<<"\n";
    }
}