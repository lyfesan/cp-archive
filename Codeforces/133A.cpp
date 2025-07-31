#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool t=false;
	int l,y;
	string n;
	cin>>n;
	l=n.length();
	for (int i=0;i<l;i++)
	{
		y=n.at(i);
		if (y=='H'||y=='Q'||y=='9')
		{
			t=true;
			break;
		}
	}
	if (t==true)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
