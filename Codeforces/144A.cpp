#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,max=0,min=10000,yes=0,no=0;
	scanf("%lld", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a);
		if(a>max)
		{
			max=a;
			yes=i;
		}
		if(a<=min)
		{
			min=a;
			no=i;
		}
	}
	printf("%d\n", yes + (n - 1 - no)  - (no < yes ? 1:0));
}
