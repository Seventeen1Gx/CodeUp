#include <stdio.h>
//从1000开始一个个数字开始试验即可 

int main()
{
	int t;
	scanf("%d", &t);
	
	int a, b, c;
	int x;
	
	while (t--) {
		scanf("%d%d%d", &a, &b, &c);
		x=1000;
		while (x<10000) {
			if ( x%a == 0 && (x+1)%b == 0 && (x+2)%c == 0 ) {
				printf("%d\n", x);
				break;
			} else
				x++;	
		}
		if (x==10000)
			printf("Impossible\n");
	}
	
	return 0;
}
