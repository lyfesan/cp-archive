#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	string str;
	bool arr[100],a=true;
	for(int i=0;i<100;i++)
	{
		arr[i]=false;
	}
	cin>>str;
	for (int i=0;i<str.length();i++)
	{
		str.at(i)=toupper(str.at(i));
		arr[str[i]]=true;
	}
	for(int k='A';k<='Z';k++)
	{
		if (arr[k]==false)
		{
			a=false;
			break;
		}
	}
	if (a)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

}

