#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,firstd,lastd,ans;
	int m[370], f[370];
	char gender;
	cin>>n;
	memset(m, 0, sizeof(m));
	memset(f, 0, sizeof(f));
	/*
	for(int i=0;i<370;i++)
	{
		m[i]=0;
		f[i]=0;
	}
	*/
	for(int i=0;i<n;i++)
	{
		cin>>gender>>firstd>>lastd;
		if(gender == 'M')
		{
			for(int j=firstd;j<=lastd;j++)
			{
				m[j]++;
			}
		}
		else
		{
			for(int j=firstd;j<=lastd;j++)
			{
				f[j]++;
			}
		}
	}
	ans=0;
	for(int i=1;i<=366;i++)
	{
		ans=max(ans,min(m[i],f[i])*2);
	}
	cout<<ans<<"\n";
}
