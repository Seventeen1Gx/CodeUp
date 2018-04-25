#include <stdio.h>

//在汇率最大的那个月兑换即可 
int main()
{
	double n;
	scanf("%lf", &n);
	double a[12];
	double max = 0;
	
	for ( int i=0; i<12; i++ ) {
		scanf("%lf", &a[i]);
		if ( a[i] > max )
			max = a[i];
	}
	
	printf("%.2f\n", n * max );
	return 0;
}
