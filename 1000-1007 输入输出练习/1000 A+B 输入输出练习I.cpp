#include <stdio.h>

//û��˵������Ľ�����־
int main()
{
	int a, b;
	
	//Ҳ������!=EOF 
	while ( scanf("%d %d", &a, &b)  == 2 ) {
		printf("%d\n", a+b);
	}
	
	return 0;
}
