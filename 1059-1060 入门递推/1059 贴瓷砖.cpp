#include <stdio.h>
//递推公式见本页面下README.md


//对于2*n的地板有多少中铺设方案 
int F(int n)
{
	if (n==1) {
		return 1;
	} else if (n==2) {
		return 3; 
	} else if (n>2) {
		return F(n-1) + 2 * F(n-2);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	
	int n;
	while (t--) {
		
		scanf("%d", &n);
		printf("%d\n", F(n));
	}
	
	return 0;
}
