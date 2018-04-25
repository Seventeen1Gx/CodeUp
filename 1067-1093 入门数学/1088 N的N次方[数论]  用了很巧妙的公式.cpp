//N^N=10^(NlgN)
//设NlgN=a+b，a为整数，b为小数
//则N^N=10^b * 10^a   后者将前者左移 
//因为1<=10^b<10
//所以10^b的整数部分就是答案

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	
	while ( ~scanf("%d", &n) ) {
		double c = n * log10(n);
		int a = int(c);
		double b = c - a;
		int d = pow(10, b);
		printf("%d\n", d);
	}
	return 0;
} 
