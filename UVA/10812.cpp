#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	int n,s,d,a,b;
	cin>>n;
	for (int i=0;i<n;i++) {
		cin>>s>>d;
		if (s>d) {
			if (abs(s-d)%2!=0) {
				cout<<"impossible"<<endl;
			}
			else if (abs(s-d)%2==0) {
				a=(abs(s-d))/2;
				b=abs(s-a);
				if (a>b) {
					cout<<a<<" "<<b<<endl;
				}
				else if (b>a) {
					cout<<b<<" "<<a<<endl;
				}
			}
		}
		else if (s==d) {
			cout<<0<<" "<<0<<endl;
		}
		else
		cout<<"impossible"<<endl;
	}
}
