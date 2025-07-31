#include<bits/stdc++.h>
using namespace std;

int a,b,cnt[1005],t=0,n;

int main()
{
	cnt[0]=0;
	scanf("%d", &n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d %d", &a, &b);
		cnt[i]=cnt[i-1]-a+b;
		if (cnt[i]>t)
		{
			t=cnt[i];
		}
	}
	printf("%d\n",t);
}
		
