#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, cnt=0;
	cin>>n;
	while(n>0)
	{
		if(n%10==4 || n%10==7)
		{
			cnt++;
		}
		n/=10;
	}
	if(cnt==4 || cnt==7)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
