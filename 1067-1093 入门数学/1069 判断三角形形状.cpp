#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	int a, b, c, temp;
	while (t--) {
		scanf("%d %d %d", &a, &b, &c);
		
		if (a>b) {
			temp = a;
			a = b;
			b = temp;
		}
		if (b>c) {
			temp = b;
			b = c;
			c = temp;
		}
		if (a>b) {
			temp = a;
			a = b;
			b = temp;
		}
		
		int flag = 0;
		if ( a*a + b*b == c*c ) {
			printf("good\n");
			flag = 1;
		}
		
		if (a==b || b==c) {
			printf("perfect\n");
			flag = 1;
		}
		
		if ( !flag )
			printf("just a triangle\n");
		
	} 
	
	return 0;
}
