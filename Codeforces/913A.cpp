#include<bits/stdc++.h>
using namespace std;
long long n,m;

int main()
{
	long long n,m;
	scanf ("%d %d", &n, &m);
	printf("%d\n", m%int((pow(2,n))));
}
