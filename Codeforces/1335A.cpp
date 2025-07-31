#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long a;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &a);
		printf("%lld\n", (a-1)/2);
	}
}
