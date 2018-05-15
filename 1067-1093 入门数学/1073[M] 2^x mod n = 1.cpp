#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int x;
	
	while ( scanf("%d", &n) == 1 ) {
		x = 1;
		//从x=1开始，每次自增1去试探 
		while (1) {
			if ( int(pow(2, x)) % n == 1 ) {
				printf("2^%d mod %d = 1\n", x, n);
				break;
			}
			else if ( int(pow(2, x)) % n == 0 || n%2==0 ) {
				printf("2^? mod %d = 1\n", n);
				break;
			} else {
				x++;
			}
		}
	}
	
	return 0;
}
