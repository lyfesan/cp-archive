#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	long long t,h,m;
	double angle,hour,minute;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld:%lld",&h,&m);
		minute=4.5*m;
		hour=h*22.5+22.5/80.0*m;
		angle=max(hour,minute)-min(hour,minute);
		if(angle>180.0) angle=360.0-angle; 
		printf("%.1lf\n", angle);
	}
} 