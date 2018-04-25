#include <stdio.h>

void line(int l, int n, char c)
{
	for (int i=0; i<n+l; i++) {
		if(  l==n-1 ) {
			printf("%c", c);
			continue;
		}
		if ( i==n-1+l ||  i==n-1-l )
			printf("%c", c);
		else
			printf(" ");
	}
	printf("\n");
}

int main()
{
	char c;
	int n;
	scanf("%c", &c);
	
	while ( c != '@' ) {
		scanf("%d", &n);
		for (int i=0; i<n; i++) 
			line(i, n, c);
		printf("\n");
		getchar();
		scanf("%c", &c);	
	}
	return 0;
}
