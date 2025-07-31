#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt=0;
	string s;
	cin>>s;
	for (int i=0;i<s.length();i++)
	{
		if (i==s.find(s[i]))
		{
			cnt++;
		}
	}
	if (cnt%2==0)
	{
		cout<<"CHAT WITH HER!"<<"\n";
	}
	else 
	cout<<"IGNORE HIM!"<<"\n";
}

	
		
