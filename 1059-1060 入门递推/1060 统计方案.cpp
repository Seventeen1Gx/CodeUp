#include <stdio.h>
//递归公式见本页面下README.md

int F(int n)
{
	if (n == 1)
		return 3;
	else if (n == 2)
		return 7;
	else
		return 3 * F(n - 2) + 2 * ( F(n - 1) - F(n - 2) );
}

int main()
{
	int c;
	scanf("%d", &c);
	int n;
	
	while (c--) {
		scanf("%d", &n);
		printf("%d\n", F(n));
	}
	return 0;
}

