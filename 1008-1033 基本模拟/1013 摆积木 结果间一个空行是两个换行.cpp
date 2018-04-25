#include <stdio.h>

int main()
{
	int n, a[50] = {0};
	scanf("%d", &n);
	int i, sum, average, step;
	
	while ( n !=0 ) {
		i = 0;
		sum = 0;
		while ( i<n ) {
			scanf("%d", &a[i]);
			sum += a[i];
			i++;
		}
		average = sum / n ;
		step = 0;
		i = 0;
		while ( i<n ) {
			if ( a[i] > average ) {
				step += a[i] - average;
			}
			i++;
		}
		printf("%d\n", step);
		scanf("%d", &n);
		
		if ( n!=0 )
			printf("\n");
	}
	return 0;
}
