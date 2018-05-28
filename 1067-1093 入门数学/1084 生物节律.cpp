#include <stdio.h>
//天数的起点为年初 

int main()
{
	int p, e, i, d;
	scanf("%d%d%d%d", &p, &e, &i, &d);
	
	int j=1;
	while ( p!=-1 || e!=-1 || i!=-1 || d!=-1) {
		int days;
		int x;
		
		//确定一个，再去试探剩下两个
		for ( x=0; ; x++) {
			//days表示体力达到某次高峰时距离年初的天数 
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
