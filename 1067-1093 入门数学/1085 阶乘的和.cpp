#include <stdio.h>
//注意，本题输入可能是0 
//一个数为不同的阶乘之和，那这些阶乘都是最靠近它的（这句话最关键） 
//10也是符合题目要求的 0！+1！+2！+3！ 

int main()
{
	//数组中 a[i] = i!
	//对于本题的数量级最大只用考虑9! 
	int a[10] = {1, 1};
	
	//设置数组a 
	for (int i=2; i<10; i++)
		a[i] = a[i-1] * i;
	
	int n;	
	scanf("%d", &n);
	
	while (n>=0) {
		if (n==0) {				//0直接不可能 
			printf("NO\n");
			scanf("%d", &n);
			continue;
		} 
		
		int flag = 0;
		for (int i = 9; i >= 0; i--) {
			if (n >= a[i])
				n -= a[i];
			if (n == 0) 
				flag = 1;
			if (n < 0 || flag) 
				break;
		}
		
		 
		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
		scanf("%d", &n);
	}
	
	return 0;
}
