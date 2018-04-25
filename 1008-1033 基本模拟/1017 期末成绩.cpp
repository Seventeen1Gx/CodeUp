#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	int n, k, count, x[1000];
	while ( t-- ) {
		scanf("%d %d", &n, &k);
		
		for ( int i=0; i<n; i++ ) 
			scanf("%d", &x[i]);
		
		count = 0;
		for ( int i=0; i<n; i++ ) 
			if ( x[i] > x[k-1] )
				count++;
				
		printf("%d\n", count);
	}
	return 0;
}
