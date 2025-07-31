#include<bits/stdc++.h>
using namespace std;

string s;
int sum=0;
int main()
{
	cin>>s;
	for (int i=0;i<s.size();i++)
	{
		if (sum==0 && s[i]=='h')
		{
			sum++;
		}
		else if (sum==1 && s[i]=='e')
		{
			sum++;
		}
		else if (sum==2 && s[i]=='l')
		{
			sum++;
		}
		else if (sum==3 && s[i]=='l')
		{
			sum++;
		}
		else if (sum==4 && s[i]=='o')
		{
			sum++;
		}
	}
	if (sum==5)
	{
		printf ("YES\n");
	}
	else 
		printf("NO\n");
}
		
		
		
	
