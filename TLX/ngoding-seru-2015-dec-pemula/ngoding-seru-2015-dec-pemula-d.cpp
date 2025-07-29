#include<bits/stdc++.h>
using namespace std;

queue <int> negatif;
queue <int> nol;
queue <int> positif;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			nol.push(a[i]);
		}
		else if(a[i]>0)
		{
			positif.push(a[i]);
		}
		else if(a[i]<0)
		{
			negatif.push(a[i]);
		}
	}
	while(!negatif.empty())
	{
		cout<<negatif.front()<<"\n";
		negatif.pop();
	}
	while(!nol.empty())
	{
		cout<<nol.front()<<"\n";
		nol.pop();
	}
	while(!positif.empty())
	{
		cout<<positif.front()<<"\n";
		positif.pop();
	}
}