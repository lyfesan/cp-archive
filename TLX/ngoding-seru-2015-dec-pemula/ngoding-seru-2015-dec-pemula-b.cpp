#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int a,b,c,e,f,g;
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
	{
		f=a;
		if (b>c)
		{
			g=b;
			e=c;
		}
		else
		{
			g=c;
			e=b;
		}
	}
	else if (b>a && b>c)
	{
		f=b;
		if (a>c)
		{
			g=a;
			e=c;
		}
		else
		{
			g=c;
			e=a;
		}
	}
	else if (c>a && c>b)
	{
		f=c;
		if (a>b)
		{
			g=a;
			e=b;
		}
		else
		{
			g=b;
			e=a;
		}
	}
	printf("%d\n%d\n%d\n", e, f, g);
}