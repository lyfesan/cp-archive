#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a,b;
	scanf("%lld", &n);
	for (long long i=0;i<n;i++)
	{
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", (abs(a-b)+9)/10);
	}
}
