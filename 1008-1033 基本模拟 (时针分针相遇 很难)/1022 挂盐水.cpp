#include <stdio.h>
#include <math.h>

int main()
{
	int vul, d, time, i;
	
	while ( scanf("%d %d", &vul, &d) != EOF ) {
		i = 1;
		time = 0;
		while ( vul > 0 ) {
			if ( vul - i * d > 0 ) {
				time += i+1;
				vul -= i*d;
			} else {
				time += ceil(1.0*vul/d);
				break;
			}
			i++;	
		}
		printf("%d\n", time);
	}
	return 0; 
}
