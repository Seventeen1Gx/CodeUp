#include <stdio.h>

int main()
{
	int hh = 0, mm = 0;
	double v1 = 0.5;
	double v2 = 6;
	
	int t;
	int i = 1;
	printf("精确到分钟的相遇情况：\n");
	while ( hh < 12) {
		t = 360 / (v2 - v1);
		t += mm;
		hh = hh + t/60;
		mm = t % 60;
		printf("第%d次相遇是：%02d:%02d\n", i++, hh, mm);
	}
}
