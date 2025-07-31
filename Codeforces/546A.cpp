#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,w,sum=0;
	cin>>k>>n>>w;
	for (int i=1;i<=w;i++)
	{
		if (i==1)
		{
			sum=i*k;
		}
		else
		sum=sum+i*k;
	}
	if (sum<=n)
	{
		cout<<0<<"\n";
	}
	else 
	cout<<sum-n<<"\n";
}
		
			
