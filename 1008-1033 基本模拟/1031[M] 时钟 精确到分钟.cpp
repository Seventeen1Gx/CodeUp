#include <stdio.h>

int main()
{
	int h1, m1, h2, m2;		//ʱ�� h1:m1 �� h2:m2 
	int cnt;				//��¼�������� 
	double time1, time2, t;
	double hp, mp;			//ʱ��ͷ������0��0���߹��Ķ��� 
	int t1, t2, t3, t4;
	
	printf("Initial time  Final time  Passes\n");
	while ( scanf("%d %d %d %d", &h1, &m1, &h2, &m2) != EOF ) {
		//�����ʼֵ��������Ҫ�� 
		t1 = h1;
		t2 = m1;
		t3 = h2;
		t4 = m2;
		cnt = 0;
		
		//12�㿴��0�㣬���ڼ��� 
		if ( h1==12 )
			h1 = 0;
		if ( h2==12 )
			h2 = 0;
		
		//Խ��12������
		if ( h1>h2 || h1==h2 && m1>m2)		 
			h2 +=12;
			
		//ͳһ���ɾ���0��0�ֵķ����� 
		time1 = h1*60 + m1;				 
		time2 = h2*60 + m2;
		
		hp = time1 * 0.5;				//��ʼʱʱ���߹��Ƕ�	 
		mp = m1 * 6;					//��ʼʱ�����߹��Ƕ� 
		
		//�ӿ�ʼ����һ����������û�ͼ 
		if( hp>mp )						//ʱ���ڷ���ǰ�棬׷�ϵľ���hp-mp 
			t = (hp-mp) / 5.5;
		else							//������ʱ��ǰ�棬׷�ϵľ����תһȦ 
			t = (360 - (mp-hp)) / 5.5;
		
		time1 += t;						//time1���������һ���غϵ�ʱ�� 
		
		t = 360 / 5.5;					//ÿ��tʱ������һ�� 
		while ( time1<time2 ) {			//δ׷����һֱѭ��
			cnt++;
			time1 += t;					//time1����һ��������ʱ�� 
		}
		printf("       %02d:%02d       %02d:%02d  %6d\n", t1, t2, t3, t4, cnt);
	}
	return 0;
}


