#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	for (int i=0;i<str1.length();i++)
	{
		if (str1[i]!=str2[i])
		{
			printf("%d", 1);
		}
		else
		{
			printf("%d", 0);
		}
	}
	printf("\n");
}

