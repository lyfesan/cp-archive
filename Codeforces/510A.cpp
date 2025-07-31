#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,c=0;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i%2==0)
			{
				printf("#");
			}
			else
			{
				if(i%4==1 && j==m-1)
				{
					printf("#");
				}
				else
				{
					if(j==0 && i%4!=1 && i>1)
					{
						printf("#");
					}
					else
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
