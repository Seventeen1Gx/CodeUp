#include <stdio.h>

int main()
{
	int t;
	double y, q, e, f, g, a, b;
	scanf("%d", &t);
	while ( t-- ) {
		scanf("%lf %lf %lf %lf %lf", &y, &q, &e, &f, &g);
		a = y * ( 1 + e/100 *  q/365);
		a = a * ( 1 + g/100 );
		b = y * ( 1 + f/100 * (q+365)/365 );
		printf("%.1f\n%.1f\n", a, b);
	}
	return 0;
}
