#include<bits/stdc++.h>
using namespace std;

int main()
{
	int y, a,b,c,d,tmp;
	scanf("%d", &y);
	while (0==0)
	{
		y++;
		tmp=y;
		a=tmp%10;
		tmp/=10;
		b=tmp%10;
		tmp/=10;
		c=tmp%10;
		tmp/=10;
		d=tmp%10;
		tmp/=10;
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			printf("%d\n", y);
			break;
		}
	}
}

