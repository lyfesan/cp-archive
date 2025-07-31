#include<bits/stdc++.h>
#include<cctype>
#include<string.h>
using namespace std;

int main()
{
	char str[200];
	gets(str);
	strlwr(str);
	for (int i=0;i<strlen(str);i++)
	{
		if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='u' || str[i]=='o' || str[i]=='y')
		{
			continue;
		}
		else
		cout<<"."<<str[i];
	}
}
		

