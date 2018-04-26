#include <stdio.h>

int main() 
{
	int t;
	scanf("%d", &t);
	
	int n;
	while (t--) {
		int a, b, c;
		a = 1;
		b = 2;
		scanf("%d", &n);
		
		if (n==1)
			printf("%d\n", a);
		else if (n==2)
			printf("%d\n", b);
		else {
			for (int i=0; i<n-2; i++) {
				c = a + b;      //昨天的猪保留下来和前天所生小猪到昨天又生的新猪 
				a = b; 
				b = c;
			}
			printf("%d\n", c);
		}
	}
	
	
	return 0;
}
