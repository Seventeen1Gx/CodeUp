#include <stdio.h>

int main()
{
	int t, n, m, cnt;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &n, &m);
		cnt = 0;
		for (int i=0; i<=n && i<=m; i++)
			for (int j=0; i+j<=n && i+j*2<=m; j++)
				for (int k=0; i+j+k<=n && i+j*2+k*5<=m; k++)
					if ( i+j+k==n && i+j*2+k*5==m )
						cnt++;
		printf("%d\n", cnt);
	} 
	return 0;
}
