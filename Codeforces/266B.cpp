#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	string s;
	scanf("%d %d", &n, &i);
	cin>>s;
	for (int j=0;j<i;j++)
	{
		for (int k=0;k<s.length();k++)
		{
			if (s[k]=='B' && s[k+1]=='G')
			{
				s[k]='G';
				s[k+1]='B';
				k++;
			}
		}
	}
	cout<<s<<"\n";
}
