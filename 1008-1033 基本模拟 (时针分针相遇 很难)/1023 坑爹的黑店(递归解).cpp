#include <stdio.h>

void MinTips(int n, int&min)
{
	if ( n>=0 ){
		if ( n<min )
			min = n;
		MinTips(n-350,min);
		MinTips(n-200,min);
		MinTips(n-150,min);
	}
}

int main()
{
	int t, n, min;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		min = n;
		MinTips(n,min);
		printf("%d\n", min);
	}
}
