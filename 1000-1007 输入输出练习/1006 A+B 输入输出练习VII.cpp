#include <stdio.h>

//没有说明输入的结束标志 
int main()
{
	int a, b;
	
	while ( scanf("%d %d", &a, &b)  == 2 ) {
		printf("%d\n\n", a+b);
	}
	
	return 0;
}
