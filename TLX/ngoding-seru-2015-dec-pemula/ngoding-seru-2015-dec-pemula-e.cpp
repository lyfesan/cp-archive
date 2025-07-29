#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,y;
	char x;
	scanf("%d %c %d", &n, &x, &a);
	y=n-n/2;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
			{
				printf("%d", a);
			}
			else if (i>1 || i<n || j>1 || j<n)
			{
				if (n%2!=0 && (i==y && j==y))
				{
					printf("*");
				}
				else
					printf("%c",x);	
			}
		}
		printf("\n");
	}
}