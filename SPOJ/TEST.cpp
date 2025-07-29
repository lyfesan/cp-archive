#include <stdio.h>
#include <stdbool.h>
 
int main(void) {
	int n;
	bool y=true;
	while(scanf("%d", &n) != EOF)
	{
		if(n==42) y=false;
		if(y) printf("%d\n", n);
	}
	return 0;
}