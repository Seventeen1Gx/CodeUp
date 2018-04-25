#include <stdio.h>

int main()
{
	int n, time, a, b;
	scanf("%d", &n);
		
	while ( n!=0 ) {
		time = 0;
		a = 0;		//当前所处楼层 
		for ( int i=0; i<n; i++ ) {
			scanf("%d", &b);
			if ( b-a > 0)
				time += (b-a) * 6 + 5;
			else 
				time += (a-b) * 4 + 5;
			
			a = b; 
		}
		printf("%d\n", time);
		scanf("%d", &n);
	}
	return 0;
}
