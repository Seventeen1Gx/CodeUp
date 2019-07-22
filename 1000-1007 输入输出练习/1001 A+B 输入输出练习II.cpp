#include <stdio.h>

//说明了具体的输入行数n
int main()
{
	int a, b, n;
	scanf("%d", &n);
	
	while ( n-- ) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	
	return 0;
}
