#include<cstdio>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int pos=0,step=1,now=0,t=0;
		while(++t){
			if(now+step>n) break;
			now+=step;
			pos=(pos+1)%4;
			if(t%2==0) step++;
		}
		if(pos==3)printf("West\n");
		else if(pos==2)printf("South\n");
		else if(pos==1)printf("East\n");
		else if(pos==0)printf("North\n");
	}
}