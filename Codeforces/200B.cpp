#include<bits/stdc++.h>
using namespace std;

int main()
{
	double total=0;
	int k,s[200];
	scanf("%d", &k);
	for (int i=0;i<k;i++)
	{
		scanf("%d", &s[i]);
		total+=s[i];
	}
	printf("%f\n", total/k);
}
