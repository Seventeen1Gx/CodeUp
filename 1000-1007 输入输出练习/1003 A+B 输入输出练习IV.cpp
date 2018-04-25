#include <stdio.h>

int main()
{
	int a, sum, n, i;
	
	scanf("%d", &n);
	while ( n != 0){
		i = 0;
		sum = 0;
		while ( i<n ) {
			scanf("%d", &a);
			sum += a;
			i++;
		}
		printf("%d\n", sum);
		scanf("%d", &n);
	}
	
	return 0;
}
