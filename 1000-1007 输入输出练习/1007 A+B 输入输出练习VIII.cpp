#include <stdio.h>

int main()
{
	int a, sum, n, m, i, j;
	scanf("%d", &n);
	
	j = 0;
	while ( j<n ) {
		scanf("%d", &m);
		i = 0;
		sum = 0;
		while ( i<m ) {
			scanf("%d", &a);
			sum += a;
			i++;
		}
		printf("%d\n\n", sum);
		j++;
	}
	return 0;
}
