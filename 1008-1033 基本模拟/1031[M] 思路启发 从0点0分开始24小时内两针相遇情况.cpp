#include <stdio.h>

int main()
{
	int hh = 0, mm = 0;
	double v1 = 0.5;
	double v2 = 6;
	
	int t;
	int i = 1;
	printf("精确到分钟的相遇情况：\n");
	t = 360 / (v2 - v1);	//从重合到追及所用时间为分针比时针多走的360°除以二者速度差
	while ( hh < 12) { 
		t += mm;			//距离上个整点总共过了t分钟 
		hh = hh + t/60;
		mm = t % 60;
		if (hh > 12)
			break; 
		printf("第%d次相遇是：%02d:%02d\n", i++, hh, mm);
	}
}
