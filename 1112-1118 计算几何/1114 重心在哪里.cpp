#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while (n) {
		double x1, y1, x2, y2, x3, y3;
		for(int i = 0; i < n; i++) {
			scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
			double x, y;
			x = x1 + x2 + x3;
			y = y1 + y2 + y3;
		
			printf("%.1f %.1f\n", x/3, y/3);		
		}	
		
		scanf("%d", &n);
	}
	return 0;
}
