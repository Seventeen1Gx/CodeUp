#include <stdio.h>

//�ڻ��������Ǹ��¶һ����� 
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
