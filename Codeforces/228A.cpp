#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool y[10];
	long long arr[5], cnt=0;
	for(int i=0;i<4;i++)
	{
		scanf("%lld", &arr[i]);
	}
	sort(arr, arr+4);
	for(int i=0;i<3;i++)
	{
		if(arr[i]==arr[i+1])
		{
			cnt++;
		}
	}
	printf("%lld\n", cnt);
}
