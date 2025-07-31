#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,y,z,sumx=0,sumy=0,sumz=0;
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		scanf("%d %d %d", &x, &y, &z);
		sumx+=x;
		sumy+=y;
		sumz+=z;
		x=y=z=0;
	}
	if(sumx==0 && sumy==0 && sumz==0)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
}
