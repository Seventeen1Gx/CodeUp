#include <stdio.h>

int main()
{
	int a[9][9];
	int c, n, i, j;
	scanf("%d", &c);
	
	while (c > 0) {
		scanf("%d", &n);
		
		for ( i=0; i<n; i++ )
			for ( j=0; j<n; j++ ) 
				a[i][j] = (i+1) * (j+1);
				
		for ( i=0; i<n; i++ )
			for ( j=0; j<n; j++ ) 
				if(j == n-1)
					printf("%d\n", a[i][j]);
				else
					printf("%d ", a[i][j]);
		
		c--;
	}
	return 0;
}
