#include<cstdio>
 
int main(){
	int t,n,a[105],loc,inv;
	scanf("%d", &t);
	while(t--){
		loc=0;inv=0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(i && a[i]<a[i-1]) loc++;
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]) inv++;
			}
		}
		if(loc==inv) printf("YES\n");
		else printf("NO\n");
	}
} 