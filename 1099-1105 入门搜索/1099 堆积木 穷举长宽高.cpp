// һ��Ҫƴ�ɾ��Σ�ö�ٳ���� 
#include <stdio.h>

int f(int n)
{
	int min = 1e8;
	for (int i=1; i<=n; i++)
		for (int j=1; i*j<=n; j++) { 
			if ( n % (i*j) == 0 ) {
				int k = n / (i*j);
				int s = (i * j + i * k + j * k) * 2;
				if (s < min)
					min = s;
			}
		}
	return min;
}

int main()
{
	int c;
	scanf("%d", &c);
	
	int n;
	while (c--) {
		scanf("%d", &n);
		printf("%d\n", f(n));
	}
	return 0;
} 
