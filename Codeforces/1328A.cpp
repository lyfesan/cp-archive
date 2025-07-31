#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,n;
	scanf("%d", &t);
	for (int i=0;i<t;i++)
	{
		scanf("%d %d", &a, &b);
		if (a%b==0)
		{
			printf("%d\n", 0);
		}
		else
		{
			n=a%b;
			printf("%d\n",b-n );
		}
	}
}