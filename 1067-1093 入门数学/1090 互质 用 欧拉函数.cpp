#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	while (n) {
		if (n==1)
			printf("%d\n", 1);
		else {
			int x=n;
			for (int i=2; i<=sqrt(n); ++i) {	  // Ҫ��֤i��������
				if ( n%i==0 ) {					   
					x = x/i*(i-1);
					while ( n%i==0 ) n /= i;      // ��ͬ��������ȫ���ų� 
				}
			}
			if (n>1)
				x = x/n*(n-1);
			printf("%d\n", x);
		}
		
		scanf("%d", &n);
	}
	
	
	return 0;
}
