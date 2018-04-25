#include <stdio.h>
#include <math.h> 

int main()
{
	int x, n, t, a, sum;
	while ( scanf("%d", &x) != EOF ) {
		//计算x的位数 
		t = x;
		n = 0;
		while ( t>0 ) {
			t /= 10;
			n++;	
		}
		
		sum = 0;
		//n表示剩余未处理位数 
		while ( n>0 ) {
			a = x/pow(10,n-1);	//从前往后取各位数字 
			if ( a%2 == 0 ) 
				sum += a;
			x = x%int(pow(10,n-1));
			n--;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
