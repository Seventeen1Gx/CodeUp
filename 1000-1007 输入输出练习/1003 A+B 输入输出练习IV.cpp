#include <stdio.h>

int main()
{
	int a, sum, n, i;
	
	while ( scanf("%d", &n) ){
		if (n == 0)
			break;
	
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
