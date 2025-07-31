#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", (a>=b ? b : a), (a>=b ? (a-b)/2 : (b-a)/2));
}

