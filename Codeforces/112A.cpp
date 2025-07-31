#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	string sta,stb;
	cin>>sta;
	cin>>stb;
	transform(sta.begin(), sta.end(), sta.begin(), :: tolower);
	transform(stb.begin(), stb.end(), stb.begin(), :: tolower);
	if (sta==stb)
	{
		cout<<0<<'\n';
	}
	else if (sta<stb)
	{
		cout<<-1<<'\n';
	}
	else 
	cout<<1<<'\n';
}
