#include <stdio.h>

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		int v=1;
		int s=0;
		for (int i=0; i<n; i++) {
			s += v;
			s %= 10000;
			v += 2;
			v %= 10000;
		}
		printf("%d\n", s);
	}
	
	return 0;
}
