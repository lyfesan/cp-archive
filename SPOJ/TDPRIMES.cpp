#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MAX_IN=100000001;

vector<ll> prime;
vector <bool> isprime(MAX_IN,true);

void primesieve()
{
	isprime[0]=isprime[1]=false;
	for(ll i=2;i*i<MAX_IN;i++)
	{
		if(isprime[i])
		{
			for(int j=i*i;j<MAX_IN;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
	for(ll i=2;i<MAX_IN;i++)
	{
		if(isprime[i]) prime.push_back(i);
	}
}

int main()
{
	primesieve();
	for(ll i=0;i<prime.size();i+=100)
	{
		cout<<prime[i]<<"\n";
	}
}
