#include <stdio.h>

int main()
{
	int n, a, special;
	scanf("%d", &n);
	
	while (n) {
		special = 0;
		for (int i=n; i>0; i--) {
			scanf("%d", &a);
			special ^= a;
		}
		
		printf("%d\n", special); 
		
		scanf("%d", &n);
	}
	
	return 0;
}
