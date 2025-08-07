#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	char s[n][m];
	int A=0,L=0,C=0,T=0,R=0,Z=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			scanf("%c", &s[i][j]);
			if(s[i][j]=='A') {
				A++;
			}
			else if(s[i][j]=='C') {
				C++;
			}
			else if(s[i][j]=='L') {
				L++;
			}
			else if(s[i][j]=='T') {
				T++;
			}
			else if(s[i][j]=='R') {
				R++;
			}
			else if(s[i][j]=='Z') {
				Z++;
			}
		}
	}
	if(A>=3 && C>=1 && T>=1 && L>=1 && R>=1 && Z>=1) {
		printf("%d\n", 9);
	}
	else {
		printf("IMPOSSIBLE\n");
	}
}
