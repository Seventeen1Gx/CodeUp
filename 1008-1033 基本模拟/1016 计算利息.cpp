#include <stdio.h>

int main()
{
	int t;
	double y, q, e, f, g, a, b;
	scanf("%d", &t);
	while ( t-- ) {
		//本金y，已存天数q，活期利率e，定期利率f，提升后定期利率g 
		scanf("%lf %lf %lf %lf %lf", &y, &q, &e, &f, &g);
		a = y * ( 1 + e/100 *  q/365);	//提前取出按活期算出的本金＋利息 
		a = a * ( 1 + g/100 );	//再存一年后的本金+利息 
		b = y * ( 1 + f/100 * (q+365)/365 );	//直接存Q+365天的本金+利息 
		printf("%.1f\n%.1f\n", a, b);
	}
	return 0;
}
