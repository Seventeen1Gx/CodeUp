#include <stdio.h>
#include <string.h>
//对于1.345，小数点后1位是3，2位是4，3位是5，4位且4位之后是0 


int main()
{
	int t;
	scanf("%d", &t);
	getchar();			//吸收缓存区中的换行符 
	char num[100];
	int n;
	
	while (t--) {
		//全部预设为字符0 
		memset(num, '0', sizeof(num));
		
		//scanf()以空白符为字符串录入结束标志，且在结尾会加\0 
		scanf("%s%d", num, &n);
		
		//测试num[strlen(num)] == '\0'是否成立
		//printf("%d\n", num[strlen(num)] == '\0');
		
		//将\0换为字符0
		num[strlen(num)] = '0';
		getchar(); 		//吸收缓存区中的换行符
		
		int i = 0;
		while ( num[i] != '.' )
			i++;
		//循环结束时num[i]为小数点
		printf("%c\n", num[i+n]);
	}	
	
	return 0;
}
