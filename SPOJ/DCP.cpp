#include<cstdio>
int main(){
	int t;
	long long n,m,odd,even;
	scanf("%d", &t);
	int x=t;
	while(t--){
		scanf("%lld %lld", &n, &m);
		if(n>m){n+=m;m=n-m;n-=m;}
		if(m==n){
			if((n-1)%3==0){odd=0;even=1;}
			else {odd=1;even=0;}
		}
		else{
			even=(m-n)/3;
			if((n-1)%3==0 || (m-1)%3==0 || (m-n+1)%3==0) even++;
			odd=(m-n+1)-even;
		}
		printf("Case %d:\nOdd = %lld\nEven = %lld\n", x-t,odd,even);
	}
}

// Alternative solution using C++ with similar logic:
// #include<cstdio>
// #include<algorithm>
// #define ll long long
// using namespace std;
// int tc;
// ll m, n;
// int main(){
// 	scanf("%d", &tc);
// 	for(int t=1;t<=tc;t++){
// 		scanf("%lld %lld", &n, &m);
// 		if(n>m) swap(n,m);
// 		n--;m--;
// 		printf("Case %d:\n",t);
// 		ll genap, gasal;
// 		genap=m/3ll+1ll;
// 		if(n>0) genap-=((n-1ll)/3ll+1ll);
// 		gasal=(m-n+1ll)-genap;
// 		printf("Odd = %lld\n", gasal);
// 		printf("Even = %lld\n", genap);
// 	}
// } 