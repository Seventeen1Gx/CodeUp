#include <stdio.h>

int main()
{
	int m, k, day, count;
	scanf("%d %d", &m, &k);
	
	while ( m!=0 && k!=0 ) {
		day = 0;
		count = 0;
		while ( m>0 ) {
			m--;			//过一天，花一元 
			day++;
			count++;		//计数 
			if ( count == k ) {		//花了k元 
				m++;				//奖励一元 
				count = 0;			//重新计数 
			}
		}
		printf("%d\n", day);
		scanf("%d %d", &m, &k);
	}
	return 0;	
} 
