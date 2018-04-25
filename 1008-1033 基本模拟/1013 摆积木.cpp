#include <stdio.h>

//移动策略是将超过每堆平均积木数的堆中拿出多余的积木到还不够的堆里
//故最少移动积木数就是超过各堆超过平均积木数的个数之和 
int main()
{
	int n, a[50] = {0};
	scanf("%d", &n);
	int i, sum, average, step;
	
	while ( n !=0 ) {
		//先将积木摆放情况录入数组 
		i = 0;
		sum = 0;
		while ( i<n ) {
			scanf("%d", &a[i]);
			sum += a[i];
			i++;
		}
		
		//算出平均每堆积木数，重新遍历数组，统计各堆超过积木数之和 
		average = sum / n ;
		step = 0;
		i = 0;
		while ( i<n ) {
			if ( a[i] > average ) {
				step += a[i] - average;
			}
			i++;
		}
		printf("%d\n\n", step);
		scanf("%d", &n);
	}
	return 0;
}
