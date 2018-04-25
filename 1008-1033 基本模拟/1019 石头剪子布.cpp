#include <stdio.h>

int main()
{
	int t, n, i, score1, score2;
	char a, b;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		score1 = score2 = 0;
		for ( i=0; i<n; i++ ) {
			//注意，这里格式字符串开头的\n就是来吸收遗留在缓存区的换行符 
			scanf("\n%c %c", &a, &b);
			if ( (a=='R' && b=='P') || (a=='P' && b=='S') || (a=='S' && b=='R') )
				score2++;
			else if ( (b=='R' && a=='P') || (b=='P' && a=='S') || (b=='S' && a=='R') ) 
				score1++;
		}
		 
		if ( score1 > score2 )
			printf("Player 1\n");
		else if ( score1 < score2 )
			printf("Player 2\n");
		else
			printf("TIE\n");
	}
	return 0;	
} 
