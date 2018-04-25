#include <stdio.h>

int main()
{
	int a, sum, n, i;
	
	while ( scanf("%d", &n) == 1 ) {
		i = 0;
		sum = 0;
		while ( i<n ) {
			scanf("%d", &a);
			sum += a;
			i++;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
