#include <stdio.h>

int main()
{
	int m, k, day, count;
	scanf("%d %d", &m, &k);
	
	while ( m!=0 && k!=0 ) {
		day = 0;
		count = 0;
		while ( m>0 ) {
			m--;			//��һ�죬��һԪ 
			day++;
			count++;		//���� 
			if ( count == k ) {		//����kԪ 
				m++;				//����һԪ 
				count = 0;			//���¼��� 
			}
		}
		printf("%d\n", day);
		scanf("%d %d", &m, &k);
	}
	return 0;	
} 
