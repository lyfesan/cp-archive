#include<stdio.h>
#include<stdbool.h>

int main() {
    int t,c1,c2,c3,a1,a2,a3,a4,a5;
    bool y;
	scanf("%d", &t);
	while(t--) {
		y=false;
		scanf("%d %d %d", &c1,&c2,&c3);
		scanf("%d %d %d %d %d", &a1,&a2,&a3,&a4,&a5);
		if(a1<=c1 && a2<=c2 && a3<=c3) {
			c1-=a1;
			c2-=a2;
			c3-=a3;
			a1=0;
			a2=0;
			a3=0;
			if(a4) {
				if(c1>=a4) {
					c1-=a4;
					a4=0;
				}
				else {
					a4-=c1;
					c1=0;
				}
				if(c3>=a4) {
					c3-=a4;
					a4=0;
				}
			}
			if(a5) {
				if(c2>=a5) {
					c2-=a5;
					a5=0;
				}
				else {
					a5-=c2;
					c2=0;
				}
				if(c3>=a5) {
					c3-=a5;
					a5=0;
				}
			}
			if(a1==0 && a2==0 && a3==0 && a4==0 && a5==0) y=true;
		}

		if(y) printf("YES\n");
		else printf("NO\n");
	}
}