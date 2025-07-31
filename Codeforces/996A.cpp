#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[5]={100, 20, 10, 5, 1};
	long long n,sum=0;
	scanf("%lld", &n);
	{
		for(int i=0;i<5;i++)
		{
			sum+=n/a[i];
			n%=a[i];
		}
	}
	printf("%lld\n", sum);
}
