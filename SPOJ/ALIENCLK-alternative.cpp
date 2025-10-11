#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long t,h,m;
    char col;
	double angle,hour,minute;
	cin>>t;
	while(t--){
		cin>>h>>col>>m;
		minute=4.5*m; //Angle per minute = 360/80 = 4.5
		hour=h*22.5+22.5/80.0*m; //Angle per hour = 360/16 = 22.5 + extra angle per minutes 
		angle=max(hour,minute)-min(hour,minute);
        if(angle>180.0) angle=360.0-angle; 
		cout<<fixed<<setprecision(1)<<angle<<"\n";
	}
} 