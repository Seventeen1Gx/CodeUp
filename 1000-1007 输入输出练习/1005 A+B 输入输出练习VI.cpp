#include <stdio.h>

//没有说明结束标志，则利用EOF判断结束 
int main()
{
	int a, sum, n, i;
	
	while ( scanf("%d", &n) != EOF ) {
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
