#include <stdio.h>

int main()
{
	int h1, m1, h2, m2;
	int cnt;
	double time1, time2, t;
	double hp, mp;
	int t1, t2, t3, t4;
	
	printf("Initial time  Final time  Passes\n");
	while ( scanf("%d %d %d %d", &h1, &m1, &h2, &m2) != EOF ) {
		t1 = h1;
		t2 = m1;
		t3 = h2;
		t4 = m2;
		cnt = 0;
		
		if ( h1==12 )
			h1 = 0;
		if ( h2==12 )
			h2 = 0;
			
		if ( h1>h2 || h1==h2 && m1>m2)
			h2 +=12;
			
		time1 = h1*60 + m1;
		time2 = h2*60 + m2;
		
		hp = time1 * 0.5;
		mp = m1 * 6;
		
		if( hp>mp )						//从开始到第一次相遇 
			t = (hp-mp) / 5.5;
		else
			t = (360 - (mp-hp)) / 5.5;
		
		time1 += t;
			
		while ( time1<time2 ) {
			cnt++;
			t = 360 / 5.5;
			time1 += t;			
		}
		printf("       %02d:%02d       %02d:%02d  %6d\n", t1, t2, t3, t4, cnt);
	}
	return 0;
}


