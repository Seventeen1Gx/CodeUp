/*
分界点 要么是平方数 12321 要么是对称的走的偶数步  12344321
*/
#include <stdio.h>
#include <math.h>

int main()
{
	
	int a, b;
	
	while ( scanf("%d %d", &a, &b) == 2 ) {
		int c = b - a;
		
		if (c == 0 ) {
			printf("0\n");
			continue;
		}
		
		int d = sqrt(c);
		int begin = d * d;
		int begin_step = d + d - 1;
		int end = (d+1) * (d+1);
		int end_step = d + d + 1;
		int middle = begin + d;
		int middle_step = begin_step + 1;
		
		if ( c>begin && c<=middle )
			printf("%d", middle_step);
		else if ( c>middle && c<=end )
			printf("%d", end_step);
		else if (c==begin)
			printf("%d", begin_step);
		printf("\n");
	} 
	return 0;
} 
