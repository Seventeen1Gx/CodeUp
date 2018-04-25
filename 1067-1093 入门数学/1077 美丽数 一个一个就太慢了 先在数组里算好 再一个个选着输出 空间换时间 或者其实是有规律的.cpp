#include <stdio.h>

int main()
{
	int n;
	
	while ( scanf("%d", &n) == 1 ) {
		int cnt=0;
		int three = 3, five = 5;
		
		while (1) {
			if( three<=five ) {
				cnt++;
				if(cnt==n) {
					printf("%d\n", three);
					break;
				}
				three += 3;
			} else {
				cnt++;
				if(cnt==n) {
					printf("%d\n", five);
					break;
				}
				five += 5;
			}
		}
	}
	
	return 0;
}
