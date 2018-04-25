#include <stdio.h>

int main()
{
	int local1, local2, local3, local4;
	int mask1, mask2, mask3, mask4;
	int test1, test2, test3, test4;
	scanf("%d.%d.%d.%d", &local1, &local2, &local3, &local4);
	scanf("%d.%d.%d.%d", &mask1, &mask2, &mask3, &mask4);
	
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;
	x1 = local1 & mask1;
	x2 = local2 & mask2;
	x3 = local3 & mask3;
	x4 = local4 & mask4;
	
	int n;
	scanf("%d", &n);
	while ( n-- ) {
		scanf("%d.%d.%d.%d", &test1, &test2, &test3, &test4);
		y1 = test1 & mask1;
		y2 = test2 & mask2;
		y3 = test3 & mask3;
		y4 = test4 & mask4;
		if (x1 != y1)
			printf("OUTER\n");
		else if (x2 != y2)
			printf("OUTER\n");
		else if (x3 != y3)
			printf("OUTER\n");
		else if (x4 != y4)
			printf("OUTER\n");
		else
			printf("INNER\n");
	}
	return 0;
}
