#include <stdio.h>

int main()
{
	int t;
	double y, q, e, f, g, a, b;
	scanf("%d", &t);
	while ( t-- ) {
		//����y���Ѵ�����q����������e����������f��������������g 
		scanf("%lf %lf %lf %lf %lf", &y, &q, &e, &f, &g);
		a = y * ( 1 + e/100 *  q/365);	//��ǰȡ������������ı�����Ϣ 
		a = a * ( 1 + g/100 );	//�ٴ�һ���ı���+��Ϣ 
		b = y * ( 1 + f/100 * (q+365)/365 );	//ֱ�Ӵ�Q+365��ı���+��Ϣ 
		printf("%.1f\n%.1f\n", a, b);
	}
	return 0;
}
