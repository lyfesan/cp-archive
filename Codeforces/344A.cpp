#include<bits/stdc++.h>
using namespace std;

int main()
{
	long i,n,k=0,l=0,cnt=0;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%d", &k);
		if(l!=k)
		{
			cnt++;
		}
		l=k;
	}
	printf("%d\n", cnt);
}
