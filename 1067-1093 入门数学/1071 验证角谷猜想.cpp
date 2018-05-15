#include <stdio.h>
//按题意进行即可 

int main()
{
	int n;
	scanf("%d", &n);
	
	int a;
	while (n--) {
		scanf("%d", &a);
		
		int flag = 1;			//标记是否有输出 
		while (a != 1) {			//当a为1时结束循环 
			if (a % 2 == 0) {		//a为偶数 
				a /= 2;
			} else {				//a为奇数 
				if(flag) {
					printf("%d", a); 	//输出第一个奇数 
					flag = 0;
				} else
					printf(" %d", a);	//输出之后的奇数，注意空格 
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
