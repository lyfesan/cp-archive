#include<stdio.h>

long long sum,n;

long long gcd(long long a,long long b) {
	if(b==0) return a;
	else return gcd(b, a%b);
}

int main() {
	while(scanf("%d", &n)) {
		if(n==0) break;
		sum=0;
		for(int i=1;i<n;i++) {
			for(int j=i+1;j<=n;j++)
			{
				sum+=gcd(i,j);
			}
		}
		printf("%lld\n", sum);
	}
}
