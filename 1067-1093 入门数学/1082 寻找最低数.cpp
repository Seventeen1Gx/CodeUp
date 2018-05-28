#include <stdio.h>
#include <math.h>

int main()
{
	int a[8];
	int n;
	
	scanf("%d", &n);
	while (n) {
		//将n转化为2进制形式
		//在数组中2进制形式的高位在数组的低位 
		int i=0;
		while (n!=0) {
			a[i] = n % 2;
			n /= 2;
			i++;
		}
		//从数组的高位开始（二进制的地位），寻找第一个'1' 
		int j=0;
		while ( a[j]==0 && j<i ) {
			j++;
		}
		
		int b = pow(2, j);				//换算成10进制 
		printf("%d\n", b);
		scanf("%d", &n);
	}
	
	return 0;
}
