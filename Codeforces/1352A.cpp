#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,a,cnt,b,k;
	int c[10];
	c[1]=1;
	c[2]=10;
	c[3]=100;
	c[4]=1000;
	c[5]=10000;
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		b=1;
		k=1;
		cnt=0;
		int y[10]={0,0,0,0,0,0,0,0,0,0};
		scanf("%d", &a);
		if (a<10){
			cnt=1;
			printf("%d\n", cnt);
			printf("%d\n", a);
			continue;
		}
		while (a!=0){
			if (a%10==0){
				a/=10;
				k++;
			}
			else {
				y[b]=a%10*c[k];
				cnt++;
				k++;
				b++;
				a/=10;
			}
			if (a<10 && a>0) {
				cnt++;
				y[b]=a*c[k];
				break;
			}
		}
		printf("%d\n", cnt);
		for(int j=1;j<=4;j++) {
			if (y[j]==0) {
				continue;
			}
			else {
				printf("%d ", y[j]);
			}
		}
		printf("\n");
	}		
}
		
