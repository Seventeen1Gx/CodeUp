#include <stdio.h>

//û��˵��������־��������EOF�жϽ��� 
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
