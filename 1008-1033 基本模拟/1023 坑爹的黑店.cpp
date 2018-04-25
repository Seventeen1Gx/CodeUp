#include <stdio.h>

int main()
{
	int t, n, i, j, k, min;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		min = n;
		for ( i=0; i*350 <= n; i++ )
			for ( j=0; j*200 + i*350 <= n; j++ )
				for ( k=0; j*200 + i*350 + k*150 <=n; k++ )
					if ( n - (j*200 + i*350 + k*150) < min )
							min = n - (j*200 + i*350 + k*150);
		printf("%d\n", min);
	}
	return 0;
}
