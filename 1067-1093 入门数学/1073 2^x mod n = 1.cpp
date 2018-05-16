#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int x;
	
	while ( scanf("%d", &n) == 1 ) {
		if ( n % 2 == 0 || n == 1 )
			printf("2^? mod %d = 1\n", n);
		else {
			x = 1;
			int a = 2;			//a = 2^x 
			while (1) {
				if (a % n == 1) {
					printf("2^%d mod %d = 1\n", x, n);
					break;
				}
				x++;
				a *= 2;
			}
		}
	}
	
	return 0;
}
