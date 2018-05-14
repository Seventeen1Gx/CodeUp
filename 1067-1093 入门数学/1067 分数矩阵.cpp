#include <stdio.h>
#include <math.h>
//无需求出矩阵，根据题目特性直接算出结果
//注意规律
//主对角线方向，依次往上，分为为n个1/1，n-1个1/2，……，1个1/n 

int main()
{
	int n;
	scanf("%d", &n);
	
	while (n) {
		double sum = 0;
		
		//由于矩阵对称，这里求一个三角部分的元素之和
		//这里每次加一个斜列元素之和（主对角线方向，依次往上） 
		for (int i=0, j=n; i<n; i++, j--)
			sum += 1.0 / (i+1) * j;

		//对sum进行调整再输出，两倍后减去多算的对角线之和	
		printf("%.2f\n", 2 * sum - n);
		scanf("%d", &n);
	}
	return 0;
}
