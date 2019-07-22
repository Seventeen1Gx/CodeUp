#include <stdio.h>

//说明了输入数据的组数 
int main()
{
	int a, sum, n, m, i;
	scanf("%d", &n);
	
	while ( n-- ) {
		scanf("%d", &m);
		
		i = 0;
		sum = 0;
		while ( i<m ) {
			scanf("%d", &a);
			sum += a;
			i++;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
