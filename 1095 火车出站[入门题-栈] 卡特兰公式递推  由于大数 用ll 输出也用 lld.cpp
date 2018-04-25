#include <stdio.h>


void cattleya(int n);

long long c[21];
int main()
{
	int n;
	cattleya(21);
	
	while ( ~scanf("%d", &n) ) {
		printf("%lld\n", c[n]);
	}
	
	return 0;
}

void cattleya(int n)
{
	c[1] = 1;
	
	for (int i=2; i<n; i++) {
		c[i] = 1.0 * c[i-1] / (i+1) * (4*i-2);
	}
}
