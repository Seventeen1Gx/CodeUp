#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	while (n) {
		double sum = 0;
		
		for (int i=0, j=n; i<n; i++, j--)
			sum += 1.0 / (i+1) * j;

				
				
		printf("%.2f\n", 2*sum - n);
		scanf("%d", &n);
	}
	return 0;
}
