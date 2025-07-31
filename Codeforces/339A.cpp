#include<bits/stdc++.h>
using namespace std;

string str;
vector<char> bil;

int  main()
{
	cin>>str;
	for(int i=0;i<str.length();i+=2)
	{
		bil.push_back(str[i]);
	}
	sort(bil.begin(),bil.end());
	for(int i=0;i<bil.size()-1;i++)
	{
		cout<<bil[i]<<'+';
	}
	int x=bil.size();
	cout<<bil[x-1];
}
