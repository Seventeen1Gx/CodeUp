#include <stdio.h>

int main()
{
	int hh = 0, mm = 0;
	double v1 = 0.5;
	double v2 = 6;
	
	int t;
	int i = 1;
	printf("��ȷ�����ӵ����������\n");
	while ( hh < 12) {
		t = 360 / (v2 - v1);
		t += mm;
		hh = hh + t/60;
		mm = t % 60;
		printf("��%d�������ǣ�%02d:%02d\n", i++, hh, mm);
	}
}
