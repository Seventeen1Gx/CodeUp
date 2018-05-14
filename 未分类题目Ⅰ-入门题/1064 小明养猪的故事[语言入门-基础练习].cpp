#include <stdio.h>
//其实是一个斐波那契数列问题 

int main() 
{
	int t;
	scanf("%d", &t);
	
	int n;
	while (t--) {
		int a, b, c;
		a = 1;
		b = 2;
		scanf("%d", &n);
		
		if (n==1)
			printf("%d\n", a);
		else if (n==2)
			printf("%d\n", b);
		else {
			for (int i=0; i<n-2; i++) {
				c = a + b;      			//a与b双针移动，始终分别指向当前项的前两项 
				a = b; 
				b = c;
			}
			printf("%d\n", c);
		}
	}
	
	
	return 0;
}
