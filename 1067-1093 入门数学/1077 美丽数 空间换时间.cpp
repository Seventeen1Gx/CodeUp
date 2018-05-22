#include <stdio.h>
//¿Õ¼ä»»Ê±¼ä
int ans[100001]; 

int main()
{
	int three = 3, five = 5;
	
	for (int i = 1; i < 100001; i++) {
		if (three < five) {
			ans[i] = three;
			three += 3;
		} else if (three > five) {
			ans[i] = five;
			five += 5;
		} else {
			ans[i] = three;
			three += 3;
			five += 5;
		}
	}
	
	int n; 
	while ( ~scanf("%d", &n) ) {
		printf("%d\n", ans[n]);
	}
	
	return 0;
} 
