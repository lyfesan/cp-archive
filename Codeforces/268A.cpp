#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a[35], b[35],sum=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				sum++;
			}
		}
	}
	printf("%d\n", sum);
}
