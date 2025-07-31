#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,cnt=0;
	int p,v,t;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>p>>v>>t;
		if ((p==1 && v==1) || (p==1 && t==1) || (t==1 && v==1))
		{
			cnt++;
		}
	}
	cout<<cnt<<"\n";
}
	
