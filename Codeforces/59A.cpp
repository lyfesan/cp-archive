#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int up=0, low=0;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]<='Z' && str[i]>='A')
		{
			up++;
		}
		else if(str[i]<='z' && str[i]>='a')
		{
			low++;
		}
	}
	if (low>=up)
	{
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	}
	else if (up>low)
	{
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	}
	cout<<str<<"\n";
}

