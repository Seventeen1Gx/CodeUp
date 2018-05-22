#include <stdio.h>

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		int v=1;
		int s=0;
		//一个单位时间计算一次 
		for (int i=0; i<n; i++) {
			s += v;
			//计算的过程中就要取余，不然会超int范围
			s %= 10000;				 
			v += 2;
		}
		printf("%d\n", s);
	}
	
	return 0;
}
