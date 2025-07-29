#include<stdio.h>
#include<stdbool.h>
 
long long revNum(long long x)
{
	long long rev=0,rem;
	while(x!=0)
	{
		rem=x%10;
		rev=rev*10+rem;
		x/=10;
	}
	return rev;
}
 
int main()
{
	long long t,a,b;
	scanf("%lld",&t);
	//printf("%d\n",revNum(t));
	while(t--)
	{
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", revNum(revNum(a)+revNum(b)))	;
	}
}