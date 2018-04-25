#include <stdio.h>
#include <math.h>

const double eps = 1e-8;             //一个很小的正数 

int main()
{
	int r, l, w;
	int count = 0;
	
	scanf("%d", &r);
	while (r != 0) {
		scanf("%d%d", &w, &l);
		
		double d = sqrt(w * w + l * l);
		if (2 * r - d > -eps)
			printf("Pizza %d fits on the table.\n", ++count);
		else
			printf("Pizza %d does not fit on the table.\n", ++count);
		scanf("%d", &r);
	}
	 
	return 0;
}
