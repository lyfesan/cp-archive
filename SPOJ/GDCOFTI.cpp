#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b) {
    if(b==0) return a;
	else return gcd(b,a%b);
}

int main() {
        long long x,y,z,c;
        scanf("%lld %lld %lld", &x, &y, &z);
        c=gcd(x,y);
        printf("%lld\n", gcd(c,z));
}
