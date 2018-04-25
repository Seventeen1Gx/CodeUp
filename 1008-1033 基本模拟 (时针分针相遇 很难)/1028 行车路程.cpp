#include <stdio.h>

int interval(int h, int m, int s, int lh, int lm, int ls)
{
	int time1, time2;
	
	time1 = lh * 3600 + lm * 60 + ls;
	time2 = h * 3600 + m * 60 + s;
	
	return time2 - time1;
	
}

int main()
{
	int v, last_v = 0;
	double s;
	int last_hh=0, last_mm=0, last_ss=1;
	int hh, mm, ss;
	char c;
	
	s = 0;
	while ( scanf("%d:%d:%d", &hh, &mm, &ss) != EOF ) {
		c = getchar();
		if ( c == ' ' ) {
			scanf("%d", &v);
			s += interval(hh, mm, ss, last_hh, last_mm, last_ss) * last_v / 3.6;
			last_hh = hh;
			last_mm = mm;
			last_ss = ss;
			last_v = v; 
		} else if ( c == '\n') {
			s += interval(hh, mm, ss, last_hh, last_mm, last_ss) * v / 3.6;
			last_hh = hh;
			last_mm = mm;
			last_ss = ss;
			printf("%02d:%02d:%02d %.2f km\n", hh, mm, ss, s/1000);
		}
	} 
	
	return 0;
}
