#include <stdio.h>

int main()
{
	int m, k, day, count;
	scanf("%d %d", &m, &k);
	
	while ( m!=0 && k!=0 ) {
		day = 0;
		count = 0;
		while ( m>0 ) {
			m--;
			day++;
			count++;
			if ( count == k ) {
				m++;
				count = 0;
			}
		}
		printf("%d\n", day);
		scanf("%d %d", &m, &k);
	}
	return 0;	
} 
