#include<bits/stdc++.h>
using namespace std;
 
long long n,m,a,p,c;
 
int main()
{
	scanf("%d %d %d",&n,&m,&a);
	p=(n+a-1)/a;
	c=(m+a-1)/a;
	cout<<p*c<<endl;
}
