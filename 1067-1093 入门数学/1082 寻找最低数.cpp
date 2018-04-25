#include <stdio.h>
#include <math.h>

int main()
{
	int a[8];
	int n;
	
	scanf("%d", &n);
	while (n) {
		int i=0;
		while (n!=0) {
			a[i] = n % 2;
			n /= 2;
			i++;
		}
		int j=0;
		while ( a[j]==0 && j<i ) {
			j++;
		}
		
		int b = pow(2, j);
		printf("%d\n", b);
		scanf("%d", &n);
	}
	
	return 0;
}
