#include<stdio.h>
#include<stdbool.h>

int n,p,a;
bool b[200],ciah;
int main()
{
	scanf("%d", &n);
	scanf("%d", &p);
	for(int i=0;i<p;i++)
	{
		scanf("%d", &a);
		b[a]=true;
	}
	scanf("%d", &p);
	for(int i=0;i<p;i++)
	{
		scanf("%d", &a);
		b[a]=true;
	}
	for(int i=1;i<=n;i++)
	{
		if(!b[i])
		{
			ciah=true;
			break;
		}
	}
	if(!ciah)
	{
		printf("I become the guy.\n");
	}
	else
	{
		printf("Oh, my keyboard!\n");
	}
}
