#include <stdio.h>
#include <math.h>
//û�нݾ���ÿ����·��ͷ��β��ɨ���鼴�� 

int main()
{
	double s, t;
	int x0, y0, x1, y1, x2, y2; 
	int hh, mm;
	
	scanf("%d %d", &x0, &y0);
	s = 0;
	while ( scanf("%d %d %d %d", &x1, &y1, &x2, &y2) != EOF ) {
		s += sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
	}
	
	t = s/20 * 3.6 *2;		//��2����Ϊ���أ�t��λΪ�� 
	if ( t/60 - int(t / 60) >= 0.5 ) 	//ʣ�೬��30�룬���������һλ 
		mm = int(t / 60) + 1;
	else
		mm = int(t / 60);
		
	hh = mm/60;
	mm = mm%60;
	printf("%02d:%02d", hh, mm);
	return 0;
}
