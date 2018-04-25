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
			scanf("\n%c %c", &a, &b);
			
			switch (a) {
				case 'R': 
					switch (b) {
						case 'S': score1++; break;
						case 'P': score2++; break;
					}
					break;
				case 'S': 
					switch (b) {
						case 'P': score1++; break;
						case 'R': score2++; break;
					}
					break;
				case 'P': 
					switch (b) {
						case 'R': score1++; break;
						case 'S': score2++; break;
					}
					break;
			}
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
