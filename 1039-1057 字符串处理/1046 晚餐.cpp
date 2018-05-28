//本题餐具出现一个输出一个，不考虑重复 
#include <stdio.h>

//餐具 
char *tableware[4] = {
		"bowl", "knife", "fork", "chopsticks"
	};


bool Judge(char a[])
{
	int i, j;
	//判断是否为bowl 
	for (i = 0, j = 0; tableware[0][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[0][i] != a[j])
			break;
	if(a[j] == '\0')
		return true;
		
	//判断是否为knife
	for (i = 0, j = 0; tableware[1][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[1][i] != a[j])
			break;
	if(a[j] == '\0')
		return true;
	
	//判断是否为fork
	for (i = 0, j = 0; tableware[2][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[2][i] != a[j])
			break;
	if(a[j] == '\0')
		return true; 
	
	//判断是否为chopsticks
	for (i = 0, j = 0; tableware[3][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[3][i] != a[j])
			break;
	if(a[j] == '\0')
		return true;
	
	return false; 	
}

int main()
{
	int n;
	char a[20];
	while ( ~scanf("%d", &n) ) {

		int flag = 0;				//标记是否首个输出（输出格式控制）
		//录入每个箱子内物品
		for (int i = 0; i < n; i++) {
			scanf("%s", a);
			if ( Judge(a) ) {
				if (flag)
					printf(" %s", a);			//非首个输出，开头加空格 
				else {
					flag = 1;
					printf("%s", a);			//首个输出，开头不加空格 
				}
			}
		} 
		getchar();					//吸收缓冲区换行符
		printf("\n"); 
	}
	
	return 0;		
}
