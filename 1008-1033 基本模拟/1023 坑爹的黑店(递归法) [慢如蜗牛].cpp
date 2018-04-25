#include <stdio.h>

int min; 
void MinTips(int n) 		//n表示递归过程中剩余钱 
{
	if ( n>=0 ){			//剩余钱小于0时结束递归 
		if ( n<min )		//当前剩余钱比所付小费少 
			min = n;		//更新所付小费为n 
		MinTips(n-350);		//花350元，剩下钱n-350继续递归 
		MinTips(n-200);		//花200元，剩下钱n-200继续递归 
		MinTips(n-150);		//花150元，剩下钱n-150继续递归 
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		min = n;			//初始最少小费为n元，即什么都不买 
		MinTips(n);			//进行递归 
		printf("%d\n", min);
	}
}
