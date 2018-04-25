#include <stdio.h>

int main()
{
	int a, sum, n, m, i, j;
	scanf("%d", &m);
	
	j = 0;
	while ( j<m ) {
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
		j++;
	}
	return 0;
}
