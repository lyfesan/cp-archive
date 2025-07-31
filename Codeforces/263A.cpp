#include<bits/stdc++.h>
using namespace std;

int ar[10][10],idx,idy;

int main()
{
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			cin>>ar[j][i];
			if(ar[j][i]==1)
			{
				idx=j;
				idy=i;
			}
		}
	}
	cout<<abs(2-idx)+abs(2-idy)<<endl;
}
