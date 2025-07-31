#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,cnt=0;
	cin>>x;
	while (x>0)
	{
		if (x>=5)
		{
			cnt++;
			x-=5;
		}
		else if (x>=4)
		{
			cnt++;
			x-=4;
		}
		else if (x>=3)
		{
			cnt++;
			x-=3;
		}
		else if (x>=2)
		{
			cnt++;
			x-=2;
		}
		else if (x>=1)
		{
			cnt++;
			x-=1;
		}
	}
	cout<<cnt<<"\n";
}
		
			
