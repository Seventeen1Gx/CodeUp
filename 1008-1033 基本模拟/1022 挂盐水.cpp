#include <stdio.h>
#include <math.h>

int main()
{
	int vul, d, time, i;
	
	while ( scanf("%d %d", &vul, &d) != EOF ) {
		i = 1;				//��i�Σ�����i�� 
		time = 0;
		while ( vul > 0 ) {
			if ( vul - i * d > 0 ) {	//������i�λ���ʣ�� 
				time += i+1;			//��i���ͣһ�� 
				vul -= i*d;				//��ʣ��Һ����� 
			} else {					//�Ѳ���i�� 
				time += ceil(1.0*vul/d);	//ʣ��i�μ�i�룬����һ��ȡ��������ȡ�� 
				break;
			}
			i++;	
		}
		printf("%d\n", time);
	}
	return 0; 
}
