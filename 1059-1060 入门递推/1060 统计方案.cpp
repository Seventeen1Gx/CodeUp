#include <stdio.h>

int main()
{
	int c;
	scanf("%d", &c);
	int n;
	
	while (c--) {
		int a1 = 3;
		int a2 = 7;
		int a3;
		scanf("%d", &n);
		
		if (n==1)
			printf("%d\n", a1);
		else if (n==2)
			printf("%d\n", a2);
		else {
			for (int i=0; i<n-2; i++) {
				a3 = a1 * 3 + ( a2 - a1 ) * 2;  //a1直走一步，然后有3种可能 
				a1 = a2;						//a2-（a1直走后的可能数） 是a1时不直走的，然后有2种可能 
				a2 = a3;
			}
			printf("%d\n", a3);
		}
			
	}
	
	return 0;
}
