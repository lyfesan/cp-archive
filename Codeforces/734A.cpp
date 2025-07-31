#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int n, anton, danik;
	scanf ("%d", &n);
	cin>>str;
	anton=0;
	danik=0;
	for(int i=0;i<n;i++)
	{
		if (str[i]=='A')
		{
			anton+=1;
		}
		else if (str[i]=='D')
		{
			danik+=1;
		}
	}
	if (danik==anton)
	{
		printf("Friendship\n");
	}
	else if (danik>anton)
	{
		printf("Danik\n");
	}
	else if (anton>danik)
	{
		printf("Anton\n");
	}
	
}
