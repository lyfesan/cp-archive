#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	bitset<26> setalpha;
	int cnt=0;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			setalpha[str[i]%'a']=1;
		}
	}
	printf("%d\n", setalpha.count());
}
