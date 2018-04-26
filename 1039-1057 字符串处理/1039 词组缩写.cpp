#include <stdio.h>
#define IN 1
#define OUT 0 

int main()
{
	int t;
	scanf("%d", &t);
	
	char s1[200], s2[10]; 
	int state, i, j;
	
	getchar();
	while (t--) {
		gets(s1);
		state = OUT;
		for (i=j=0; s1[i] != '\0'; i++) {
			if ( state == OUT && s1[i] != ' ' ) {
				state = IN;
				if ( s1[i] >= 'a' && s1[i] <= 'z' ) 
					s2[j] = s1[i] - 'a' + 'A';
				else
					s2[j] = s1[i];
				j++;
			} else if ( s1[i] == ' ' ) {
				state = OUT;
			}
		}
		s2[j] = '\0';
		puts(s2);
	}
}
