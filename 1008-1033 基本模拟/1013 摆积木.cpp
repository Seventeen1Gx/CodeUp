#include <stdio.h>

//�ƶ������ǽ�����ÿ��ƽ����ľ���Ķ����ó�����Ļ�ľ���������Ķ���
//�������ƶ���ľ�����ǳ������ѳ���ƽ����ľ���ĸ���֮�� 
int main()
{
	int n, a[50] = {0};
	scanf("%d", &n);
	int i, sum, average, step;
	
	while ( n !=0 ) {
		//�Ƚ���ľ�ڷ����¼������ 
		i = 0;
		sum = 0;
		while ( i<n ) {
			scanf("%d", &a[i]);
			sum += a[i];
			i++;
		}
		
		//���ƽ��ÿ�ѻ�ľ�������±������飬ͳ�Ƹ��ѳ�����ľ��֮�� 
		average = sum / n ;
		step = 0;
		i = 0;
		while ( i<n ) {
			if ( a[i] > average ) {
				step += a[i] - average;
			}
			i++;
		}
		printf("%d\n\n", step);
		scanf("%d", &n);
	}
	return 0;
}
