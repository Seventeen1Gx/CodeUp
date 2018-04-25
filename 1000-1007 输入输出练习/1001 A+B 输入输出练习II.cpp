#include <stdio.h>

int main()
{
	int a, b, n;
	scanf("%d", &n);
	
	int i = 0;
	while ( i<n ) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	
	return 0;
}
