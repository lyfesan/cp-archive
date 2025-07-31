#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a;
	scanf("%d", &n);
	int P[n+5];
	for (int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		P[a]=i;
	}
	for (int i=1;i<=n;i++)
	{
		printf("%d ",P[i]);
	}
	printf("\n");
}
