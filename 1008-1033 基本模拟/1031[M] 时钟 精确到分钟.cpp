#include <stdio.h>

int main()
{
	int h1, m1, h2, m2;		//时刻 h1:m1 与 h2:m2 
	int cnt;				//记录相遇次数 
	double time1, time2, t;
	double hp, mp;			//时针和分针距离0点0分走过的度数 
	int t1, t2, t3, t4;
	
	printf("Initial time  Final time  Passes\n");
	while ( scanf("%d %d %d %d", &h1, &m1, &h2, &m2) != EOF ) {
		//保存初始值，输出结果要用 
		t1 = h1;
		t2 = m1;
		t3 = h2;
		t4 = m2;
		cnt = 0;
		
		//12点看成0点，便于计算 
		if ( h1==12 )
			h1 = 0;
		if ( h2==12 )
			h2 = 0;
		
		//越过12点的情况
		if ( h1>h2 || h1==h2 && m1>m2)		 
			h2 +=12;
			
		//统一换成距离0点0分的分钟数 
		time1 = h1*60 + m1;				 
		time2 = h2*60 + m2;
		
		hp = time1 * 0.5;				//起始时时针走过角度	 
		mp = m1 * 6;					//起始时分针走过角度 
		
		//从开始到第一次相遇，最好画图 
		if( hp>mp )						//时针在分针前面，追赶的距离hp-mp 
			t = (hp-mp) / 5.5;
		else							//分针在时针前面，追赶的距离多转一圈 
			t = (360 - (mp-hp)) / 5.5;
		
		time1 += t;						//time1到达两针第一次重合的时间 
		
		t = 360 / 5.5;					//每过t时间相遇一次 
		while ( time1<time2 ) {			//未追到就一直循环
			cnt++;
			time1 += t;					//time1到下一次相遇的时刻 
		}
		printf("       %02d:%02d       %02d:%02d  %6d\n", t1, t2, t3, t4, cnt);
	}
	return 0;
}


