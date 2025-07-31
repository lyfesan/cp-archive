#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n, cnt=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s=="Icosahedron")
		{
			cnt+=20;
		}
		else if(s=="Cube")
		{
			cnt+=6;
		}
		else if(s=="Tetrahedron")
		{
			cnt+=4;
		}
		else if(s=="Dodecahedron")
		{
			cnt+=12;
		}
		else if(s=="Octahedron")
		{
			cnt+=8;
		}
	}
	printf("%d\n", cnt);
}
