#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k,x,a[200000],cnt;
	scanf("%lld", &n);
	for (int i=0;i<n;i++)
	{
		scanf("%lld %lld", &x, &k);
		for (int i=1;i<=x;i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a+1,a+x+1,greater<long long>());
		cnt=0;
		for(int i=1;i<=k+1;i++)
		{
			cnt+=a[i];
		}
		printf("%lld\n", cnt);
	}
}
