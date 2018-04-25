#include <stdio.h>
#include <math.h> 

int main()
{
	int x, n, t, a, sum;
	while ( scanf("%d", &x) != EOF ) {
		t = x;
		n = 0;
		while ( t>0 ) {
			t /= 10;
			n++;	
		}
		sum = 0;
		while ( x>0 ) {
			a = x/pow(10,n-1);
			if ( a%2 == 0 ) 
				sum += a;
			x = x%int(pow(10,n-1));
			n--;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
