#include <stdio.h>
//本题s始终记录上次操作时间时所走的路程
//每次操作时，只要每次加上本次操作时间和上次操作时间间隔内走的路程即可 


//计算两个时间下相差的时间间隔，单位秒 
int interval(int h, int m, int s, int lh, int lm, int ls)
{
	int time1, time2;
	
	time1 = lh * 3600 + lm * 60 + ls;
	time2 = h * 3600 + m * 60 + s;
	
	return time2 - time1;
	
}

int main()
{
	int v, last_v = 0;					//last_v记录上次操作时的速度值 
	double s;
	int last_hh=0, last_mm=0, last_ss=1;	//last分别记录上次操作时的时：分：秒 
	int hh, mm, ss;
	char c;
	
	s = 0;
	while ( scanf("%d:%d:%d", &hh, &mm, &ss) != EOF ) {
		c = getchar();
		if ( c == ' ' ) {		//说明是改变速度 
			scanf("%d", &v);
			//本次操作时间与上次操作时间间隔以上次操作速度走了s千米 
			s += interval(hh, mm, ss, last_hh, last_mm, last_ss) * last_v / 3.6;
			//更新新的时间和速度记录 
			last_hh = hh;
			last_mm = mm;
			last_ss = ss;
			last_v = v; 
		} else if ( c == '\n') {		//说明是查询 
			//本次操作时间与上次操作时间间隔以上次操作速度走了s千米
			s += interval(hh, mm, ss, last_hh, last_mm, last_ss) * v / 3.6;
			//更新新的时间记录
			last_hh = hh;
			last_mm = mm;
			last_ss = ss;
			printf("%02d:%02d:%02d %.2f km\n", hh, mm, ss, s/1000);
		}
	} 
	
	return 0;
}
