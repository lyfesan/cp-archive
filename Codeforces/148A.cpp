#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,l,m,n,d,cnt=0;
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
	bool a[d];
	for(int i=1;i<=d;i++)
	{
		a[i]=false;
	}
	for(int i=k;i<=d;i+=k)
	{
		a[i]=true;
	}
	for(int i=l;i<=d;i+=l)
	{
		a[i]=true;
	}
	for(int i=m;i<=d;i+=m)
	{
		a[i]=true;
	}
	for(int i=n;i<=d;i+=n)
	{
		a[i]=true;
	}
	for(int i=1;i<=d;i++)
	{
		if(a[i]==true)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);
}
