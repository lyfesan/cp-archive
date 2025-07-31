#include<bits/stdc++.h>
using namespace std;

string str;
int ck1,ck2;
string one="1111111", zero="0000000";

int main()
{
	cin>>str;
	ck1=str.find(one);
	ck2=str.find(zero);
	if (ck1==-1&&ck2==-1)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
}
