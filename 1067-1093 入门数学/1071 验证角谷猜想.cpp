#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int a;
	while (n--) {
		scanf("%d", &a);
		
		int flag = 1;
		while (a!=1) {
			if (a%2==0) {
				a /= 2;
			} else {
				if (flag) {
					printf("%d", a);
					flag = 0;
				} else
					printf(" %d", a);
				a *= 3;
				a += 1;
			}
		}
		if (flag)
			printf("No number can be output !");
		printf("\n");
	}
	
	return 0;
} 
