#include <stdio.h>

int main()
{
	
	int a, b;
	int n, m;
	int value1;
	double value2;
	scanf("%d %d", &n, &m);
	
	int i=1;
	while ( m!=0 || n!=n ) {
		
		int cnt = 0;
		for (a=1; a<n; a++)
			for (b=a+1; b<n; b++) {
				value1 = ( a*a + b*b + m) / ( a*b );
				value2 =  1.0 * ( a*a + b*b + m) / ( a*b );
				if (value1 == value2)
					cnt++;
			}
		
		printf("Case %d: %d\n", i, cnt);
		i++;
		
		scanf("%d %d", &n, &m);
	}
	
	
	return 0;
}
