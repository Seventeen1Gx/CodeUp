//ÕÒ¹æÂÉ
#include <stdio.h>

int ans[10000];

void init()
{
	ans[0] = 2;
	for(int i = 1; i < 10000; i++) {
		ans[i] = ans[i-1] + 6 * i;
	}
}

int main()
{
	int t;
	init();
	
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", ans[n-1]);
	}
	return 0;
}
