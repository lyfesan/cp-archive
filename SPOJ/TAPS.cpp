#include<cstdio>
int main(){
	int t,n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		long long tap[20]; 
		double ans=0;
		for(int i=0;i<n;i++){
			scanf("%lld", &tap[i]);
			ans += (1.0/(double)tap[i]);
		}
		printf("%.3lf\n", 1.0/ans);
	}
}