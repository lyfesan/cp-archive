#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long ar[4];
	scanf("%lld %lld %lld %lld", &ar[0], &ar[1], &ar[2], &ar[3]);
	sort(ar, ar+4);
	for(int i=0;i<3;i++)
	{
		printf("%d ", ar[3]-ar[i]);
	}
	printf("\n");
}
