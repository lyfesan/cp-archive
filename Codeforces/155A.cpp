#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,max,min,perf=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		if(i==0)
		{
			max=a[i];
			min=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			perf++;
		}
		else if(a[i]<min)
		{
			min=a[i];
			perf++;
		}
	}
	printf("%d\n", perf);
}


