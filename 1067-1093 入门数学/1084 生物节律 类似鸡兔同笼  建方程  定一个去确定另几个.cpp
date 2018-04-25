#include <stdio.h>

int main()
{
	int p, e, i, d;
	scanf("%d%d%d%d", &p, &e, &i, &d);
	
	int j=1;
	while ( p!=-1 || e!=-1 || i!=-1 || d!=-1) {
		int days;
		int x;
		
		for ( x=0; ; x++) {
			days = x * 23 + p;
			if ( (days-e)%28==0 && (days-i)%33==0 && days>d ) 
				goto quit;
		}
		
		quit:
		printf("Case %d: the next triple peak occurs in %d days.\n", j, days-d);
		j++;
		scanf("%d%d%d%d", &p, &e, &i, &d);
	}
	
	return 0;
}
